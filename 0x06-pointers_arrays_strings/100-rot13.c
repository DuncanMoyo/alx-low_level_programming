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

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (c[i] == x[j])
			{
				c[i] == y[j];
				break;
			}
		}
	}
	return (0);
}
