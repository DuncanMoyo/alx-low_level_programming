#include "main.h"

/**
 * string_toupper - Entry point
 * Description: changes all lowercase letters of a string to uppercase.
 * @c: pointer to the string that will be changed
 * Return: uppercase string
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= 32;
		}
	}
	return (c);
}
