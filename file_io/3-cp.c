#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - copies content of one file to another.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, or exit with specific codes on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t rd, wr;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		close(fd_from), dprintf(STDOUT_FILENO,
				"Error: Can't write to %s\n", argv[2]), exit(99);

	while ((rd = read(fd_from, buffer, 1024)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr != rd)
			close(fd_from), close(fd_to),
			dprintf(STDOUT_FILENO, "Error: Can't write to %s\n",
					argv[2]), exit(99);
	}
	if (rd == -1)
		close(fd_from), close(fd_to),
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);

	if (close(fd_from) == -1)
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n",
				fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", fd_to),
			exit(100);

	return (0);
}

