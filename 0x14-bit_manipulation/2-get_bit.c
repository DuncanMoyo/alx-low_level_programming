#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* check if specified index is greater than maximum possible index */
	/* max possible index - sizeof(n) * 8 - 1 where */
	/* sizeof(n) returns number of bytes used to show unsigned ling int */
	/* 8 is the number of bits in a byte */
	if (index > (sizeof(n) * 8 - 1))
	{
		return (-1);
	}
	/* calculates the calue of the bit at that index by shifting n to */
	/* the right by index positions.  */
	/* bitwise & to isolate the least significant bit */
	return ((n >> index) & 1);
}
