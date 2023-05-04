#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: int
 */

int get_endianness(void)
{
	/* i is represented in big and little endian in binary  */
	unsigned int i = 1;
	/* when c is dereferenced, we have the first byte of c only */
	char *c = (char *) &i;
	/* dereferences c, gets the 1st byte of i, casts it to an int  */
	/* and returns it */
	return ((int)*c);
}

