#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: locates first occurence in the string s of any of the byes in accept
 * @accept: the string to be looked at
 * Return: The number of bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
