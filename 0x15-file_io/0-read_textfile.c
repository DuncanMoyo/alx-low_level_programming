#include "main.h"

/**
 * read_textfile - reads a text file, prints it to the POSIX standard output
 * @filename: pointer to the filename
 * @letters: the number of letters to read and print
 * Return: number of bytes written to output
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* bytes written to std-output & read from the file respectively */
	ssize_t n_written, n_read;
	/* pointer to ch that will point to memory block used to store file */
	char *buffer;
	/* int that will hold the file descriptor returned by open function */
	int fd;
	/* as per requirement */
	if (filename == NULL)
	{
		return (0);
	}
	/* if true, it means an error occurred while opening the file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	/* if true, the allocation would have failed. */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	/* reads up to letters bytes from the file sprecified by fd */
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		return (0);
	}
	/* writes up to n_read bytes from the buffer to stdout */
	n_written = write(STDOUT_FILENO, buffer, n_read);
	if (n_written == -1 || n_written != n_read)
	{
		return (0);
	}

	close(fd);
	free(buffer);

	return (n_written);
}

