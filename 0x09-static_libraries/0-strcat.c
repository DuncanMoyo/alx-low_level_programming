#include "main.h"

/**
 * _strcat - Entry point
 * Description: a function that concatenates two strings.
 * @dest: pointer to destination input
 * @src: pointer to src input
 * Return: 0 success
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
