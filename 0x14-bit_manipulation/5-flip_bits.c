#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 *
 * @n: unsigned long int argument
 * @m: unsigned long int argument
 * Return: unsinged int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* calculates the bitwise XOR */
	/* bits that are diff btwn n & m are set to 1 */
	unsigned long int xor = n ^ m;
	/* keeps track of the number of bits that need to be flipped */
	unsigned int count = 0;
	/* continues until xor is 0 */
	while (xor)
	{
		/* bitwise AND operator to check the least bit of xor is set */
		/* if set xor & 1 = 1 and count will be +1 */
		/* if not, xor & 1 = 0 and count will not change */
		count += xor & 1;
		/* right shifts by 1 bit. this divides xor by 2 */
		/* discards the least significant bit */
		xor >>= 1;
	}
	return (count);
}

