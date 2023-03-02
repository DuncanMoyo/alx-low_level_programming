#include "main.h"

/**
 * cap_string - Entry point
 * Description: function that capitalizes all words of a string.
 * @c: pointer to string that will be capitalised
 * Return: capitalised string
 */

char *cap_string(char *c)
{
	int i;

	if (c[0] >= 'a' && c[0] <= 'z')
	{
		c[0] -= 32;
	}
	for (i = 0; c[i] != '\0'; i++)
	{
		if (
				c[i] == ' ' ||
				c[i] == '\t' ||
				c[i] == '\n' ||
				c[i] == ',' ||
				c[i] == ';' ||
				c[i] == '.' ||
				c[i] == '!' ||
				c[i] == '?' ||
				c[i] == '"' ||
				c[i] == '(' ||
				c[i] == ')' ||
				c[i] == '{' ||
				c[i] == '}')
		{
			if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
			{
				c[i + 1] -= 32;
			}
		}
	}
	return (c);
}
