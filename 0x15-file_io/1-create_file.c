#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: pointer to the name of the file to be created
 * @text_content: pointer to the content to be written in the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	/* store number of bytes written */
	ssize_t wr;
	/* store file descriptor returned by open */
	int fd;
	/* as per requirement */
	if (!filename)
	{
		return (-1);
	}
	/* opens/creates the file if it doesnt exist */
	/*  O_CREAT - creates the file if it doesnt exist */
	/* O_WRONLY - opened for writing only */
	/* O_TRUNC - truncated to zero length if it already exists */
	/* S_IRUSR | S_IWUSR - file should be read/written by the owner */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	/* checks if text_content is not null */
	if (text_content)
	{
		/* to write the content to the specified file */
		wr = write(fd, text_content, strlen(text_content));
		if (wr == -1)
		{
			return (-1);
		}
	}

	close(fd);

	return (1);
}
