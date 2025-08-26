#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * write_all - write all bytes or exit 99 on error
 * @fd: destination fd
 * @buf: buffer
 * @n: bytes to write
 * @name: dest filename (for error message)
 */
static void write_all(int fd, char *buf, ssize_t n, char *name)
{
	ssize_t off = 0;
	ssize_t wr;

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
 * must_close - close fd or exit 100
 * @fd: file descriptor
 */
static void must_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy file_from to file_to
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, exits 97-100 on errors
 */
int main(int argc, char **argv)
{
	int fd_from;
	int fd_to;
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
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		must_close(fd_from);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		must_close(fd_from);
		exit(99);
	}

	while (rd > 0)
	{
		write_all(fd_to, buf, rd, argv[2]);
		rd = read(fd_from, buf, 1024);
		if (rd == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			must_close(fd_from);
			must_close(fd_to);
			exit(98);
		}
	}

	must_close(fd_from);
	must_close(fd_to);
	return (0);
}

