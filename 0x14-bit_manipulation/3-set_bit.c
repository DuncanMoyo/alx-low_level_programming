#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: poinyer to an unsigned long int
 * @index: unsigned int
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* check if specified index is greater than the max possible index */
	/* for an unsigned index */
	if (index > (sizeof(*n) * 8 - 1))
	{
		return (-1);
	}
	/* using the bitwise OR operaator and a bit mask */
	/* bit mask is created by shifting the value 1UL left by index pos */
	/* creates a value with a single 1 bit at the specific index */
	/* and 0 bits elsewhere.  */
	*n |= (1UL << index);
	return (1);
}
