#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number or 0 if b is null or
 * there is one or more chars in the string b that is not 0 or 1
 */

/*
 * number * 2: multiplies the current value of num by 2
 * b[i] - '0': converts the current character to a number.
 * 1 has an ASCII value of 49 and 0 has an ASCII value of 48
 * so if you subtract '0' you should either get 0 or 1.
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
	/* loops iterates through characters of the strinf */
	for (i = 0; b[i]; i++)
	{
		/* checks if the characters are either '0' or '1' */
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		/* adds the integer to the current character */
		number = number * 2 + (b[i] - '0');
	}
	return (number);
}

