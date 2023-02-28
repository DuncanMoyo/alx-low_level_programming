#include "main.h"

/**
 * _strcpy - Entry point
 * Description: a function that copies the string pointed to by src, including
 *  the terminating null byte (\0), to the buffer pointed to by dest.
 *  @dest: the destination
 *  @src: the source
 *  Return: the string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}