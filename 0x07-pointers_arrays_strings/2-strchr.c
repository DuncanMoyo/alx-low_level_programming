#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: pointer to the string
 * @c: character to be located in the string
 * Return: first occurence of c or '\0' if not founf
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] <= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
		} else if (s[i] == '\0')
		{
			return (s);
		}

	}
	return ('\0');
}
