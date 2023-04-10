#include "main.h"
#define BUFSIZE 1024

/* HOW IT WORKS */

/*
 * open_files function trys to open the input file for reading and the output
 * file for writing. If either fails, error message is printed with the status
 * code. If both are opened, it returns an array containing the file
 * descriptors for these files
 */

/**
 * open_files - Opens the input and output files
 * @file_from: file descriptor for the input file
 * @file_to: file descriptor for the output file
 * Return: An array with the fds for the input & output files
 */

int *open_files(char *file_from, char *file_to)
{
	int *fds = malloc(2 * sizeof(int));
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	fds[0] = open(file_from, O_RDONLY);
	if (fds[0] == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fds[1] = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, mode);

	if (fds[1] == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fds[0]);
		exit(99);
	}
	return (fds);
}

/**
 * copy_file - Copies the contents of one file to another
 * @fd_from: file descriptor for the input file
 * @fd_to: file descriptor for the output file
 */

void copy_file(int fd_from, int fd_to)
{
	ssize_t rd, wr;
	char buf[BUFSIZE];

	while ((rd = read(fd_from, buf, BUFSIZE)) > 0)
	{
		wr = write(fd_to, buf, rd);
		if (wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %d\n", fd_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", fd_from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
}

/**
 * main - Entry point
 * @argc: Number of parameters
 * @argv: Array of parameters
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int *fds;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fds = open_files(argv[1], argv[2]);
	copy_file(fds[0], fds[1]);

	if (close(fds[0]) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't clode fd %d\n", fds[0]);
		close(fds[1]);
		exit(100);
	}

	if (close(fds[1]) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fds[1]);
		exit(100);
	}

	free(fds);

	return (0);
}
