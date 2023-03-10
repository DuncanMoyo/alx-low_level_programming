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

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
