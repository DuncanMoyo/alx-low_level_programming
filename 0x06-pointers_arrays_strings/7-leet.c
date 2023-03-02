#include "main.h"

/**
 * leet - Entry point
 * Description: function that encodes a string into 1337.
 * @c: pointer to the string that is to be encoded
 * Return: encoded string
 */

char *leet(char *c)
{
	int i, j;
	char remove[] = "aAeEoOtTlL";
	char put[] = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; remove[j] != '\0'; j++)
		{
			if (c[i] == remove[j])
			{
				c[i] = put[j];
			}
		}
	}
	return (c);
}
