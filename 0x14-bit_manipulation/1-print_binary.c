#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned long int as input
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		/* Divides n by 2. Shifts bits in n by 1 pos to the right */
		print_binary(n >> 1);
	}
	/* prints the least bit of n. '0' converts to to a character */
	_putchar((n & 1) + '0');
}

