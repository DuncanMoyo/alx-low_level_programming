#include "main.h"

/**
 * _strncpy - Entry point
 * Description: a function that copies a string.
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: the number of bytes to be copied
 * Return: The result
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}
