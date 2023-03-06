#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the string to be evaluated
 * @accept: the prefix
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	j = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				j++;
				break;
			} else if ((accept[i + 1]) == '\0')
			{
				return (j);
			}
		s++;
		}
	}
	return (j);
}
