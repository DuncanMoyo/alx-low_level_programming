#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number or 0 if b is null or
 * there is one or more chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	/* number will show the result of the convert */
	unsigned int number;
	/* this is for the loop counter */
	int i;

	number = 0;
	/* same as b == NULL, returns 0 if true */
	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		number = number * 2 + (b[i] - '0');
	}
	return (number);
}
