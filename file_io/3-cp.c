#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success; exits with 97/98/99/100 on errors
 */
int main(int argc, char *argv[])
{
	int fd_from = -1, fd_to = -1;
	ssize_t rd, wr;
	char buffer[1024];

	/* 1) Validate args: print to stderr only */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* 2) Open source first */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* 3) Probe a read BEFORE opening dest, to prioritize read errors (exit 98) */
	rd = read(fd_from, buffer, sizeof(buffer));
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		exit(98);
	}

	/* 4) Now open/create dest (truncate if exists, keep existing perms if already exists) */
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}

	/* 5) If we already read something, write it (handle partial writes) */
	while (rd > 0)
	{
		ssize_t total = 0;
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

		/* Read next chunk */
		rd = read(fd_from, buffer, sizeof(buffer));
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close(fd_from);
			close(fd_to);
			exit(98);
		}
	}

	/* 6) Close fds (report the actual fd value on failure) */
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		/* fd_to still needs closing attempt to avoid leaks in checker env */
		if (fd_to != -1)
			close(fd_to);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}

