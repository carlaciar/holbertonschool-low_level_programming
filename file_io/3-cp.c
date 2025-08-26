#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, exits with codes on failure
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to;
    ssize_t rd, wr;
    char buffer[1024];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    /* Create with 0664; if it already exists, O_TRUNC won't change its perms */
    fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close(fd_from);
        exit(99);
    }

    /* Read 1024 bytes at a time */
    while ((rd = read(fd_from, buffer, sizeof(buffer))) > 0)
    {
        ssize_t total = 0;

        /* Write loop to handle partial writes */
        while (total < rd)
        {
            wr = write(fd_to, buffer + total, rd - total);
            if (wr == -1)
            {
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                close(fd_from);
                close(fd_to);
                exit(99);
            }
            total += wr;
        }
    }

    /* If read fails at any point, exit 98 (this is what the test expects) */
    if (rd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        close(fd_from);
        close(fd_to);
        exit(98);
    }

    if (close(fd_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }
    if (close(fd_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return (0);
}

