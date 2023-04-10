#include "main.h"
#define BUFSIZE 1024

/**
 * main - Entry point
 * @argc: the number of parameters
 * @argv: the array of parameters
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t rd, wr;
	char buf[BUFSIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}

	while ((rd = read(file_from, buf, BUFSIZE)) > 0)
	{
		wr = write(file_to, buf, rd);
		if (wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_from);
		close(file_to);
		exit(98);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	}
	return (0);
}
