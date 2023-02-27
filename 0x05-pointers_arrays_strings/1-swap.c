#include "main.h"

/**
 * swap_int - Entry point
 * Description: Swaps the values of two integers
 * @a: value of first integer
 * @b: value of second integer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
