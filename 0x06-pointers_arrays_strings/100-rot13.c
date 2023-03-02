#include "main.h"

/**
 * rot13 - Entry point
 * Description: a function that encodes a string using rot13.
 * @c: pointer to the string that wil be encoded
 * Return: encoded string
 */

char *rot13(char *c)
{
	int i, j;

	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;

	while (c[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == x[j])
			{
				c[i] = y[j];
				break;
			}
		}
		i++;
	}
	return (c);
}
