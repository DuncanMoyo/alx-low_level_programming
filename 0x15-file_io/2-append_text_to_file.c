#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to the name of the file to be appended
 * @text_content: pointer to the content that will be appended
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	/* ssize_t means signed size_t: didn't know */
	ssize_t wr;
	/* check previous files for comments on this */
	int fd;
	/* as per requirement */
	if (!filename)
	{
		return (-1);
	}
	/*  O_WRONLY - file should be opened for writing only */
	/* O_APPEND - all writing should be at the end of the file */
	fd = open(filename, O_WRONLY | O_APPEND);
	/* if function fails */
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		/* function is used to append the text_content to fd */
		/* third parameter specifies number of bytes to be written */
		wr = write(fd, text_content, strlen(text_content));
		/* if function fails */
		if (wr == -1)
		{
			return (-1);
		}
	}
	close(fd);

	return (1);
}
