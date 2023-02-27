#include "main.h"

/**
 * _strlen - Entry point
 * Description: returns the length of a string
 * @s: string to count
 * Return: Length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
