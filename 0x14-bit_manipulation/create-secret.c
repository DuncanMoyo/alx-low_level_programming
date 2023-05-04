#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * Return: 0 on success
 */

int main(void)
{
	char *password = NULL;
	size_t len = 0;
	ssize_t nread;

	FILE *fp = fopen("101-password", "w");

	if (fp == NULL)
	{
		perror("Failed to open file");
		exit(EXIT_FAILURE);
	}
	printf("Enter password: ");
	nread = getline(&password, &len, stdin);

	if (nread == -1)
	{
		perror("Failed to read the input");
		exit(EXIT_FAILURE);
	}
	fputs(password, fp);
	fclose(fp);
	printf("Password file created.\n");
	free(password);

	return (0);
}
