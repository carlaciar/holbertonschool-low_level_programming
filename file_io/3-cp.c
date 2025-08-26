#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * write_all - write all n bytes from buf to fd
 * @fd: destination file descriptor
 * @buf: buffer
 * @n: number of bytes to write
 * @name: dest filename (for error message)
 * Return: void, exits(99) on error
 */
static void write_all(int fd, char *buf, ssize_t n, char *name)
{
	ssize_t off = 0, wr;

	while (off < n)
	{
		wr = write(fd, buf + off, n - off);
		if (wr == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", name);
			exit(99);
		}
		off += wr;
	}
}

/**
 * close_fd - close fd or exit(100) with message
 * @fd: file descriptor
 * Return: void
 */
static void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy a file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, exits 97-100 on errors
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	ssize_t rd;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(1, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	rd = read(fd_from, buf, 1024);
	if (rd == -1)
	{
		dprintf(1, "Error: Can't read from file %s\n", argv[1]);
		close_fd(fd_from);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close_fd(fd_from);
		exit(99);
	}

	while (rd > 0)
	{
		write_all(fd_to, buf, rd, argv[2]);
		rd = read(fd_from, buf, 1024);
		if (rd == -1)
		{
			dprintf(1, "Error: Can't read from file %s\n", argv[1]);
			close_fd(fd_from);
			close_fd(fd_to);
			exit(98);
		}
	}

	close_fd(fd_from);
	close_fd(fd_to);
	return (0);
}

