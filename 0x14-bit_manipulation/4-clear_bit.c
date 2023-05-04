#include "main.h"

/**
 * clear_bit -  sets the value of a bit to 0 at a given index
 * @n: pointer to an unsigned long int
 * @index: unsigned int
 * Return: 1 to indicate success and -1 if it fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8 - 1))
	{
		return (-1);
	}
	/* using AND operator and bit mask; */
	/* creates a value with a single 0 bit at the specified index */
	/* and 1 bit everywhere.  */
	*n &= ~(1UL << index);
	return (1);
}

