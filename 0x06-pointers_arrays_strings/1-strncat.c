#include "main.h"

/**
 * _strncat - Entry point
 * Description: a function that concatenates two strings
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: bytes from src
 * Return: 0 (success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j <= n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
