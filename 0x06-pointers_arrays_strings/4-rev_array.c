#include "main.h"

/**
 * reverse_array - Entry point
 * Description: function that reverses the content of an array of integers.
 * @a: pointer to the array that will be reversed
 * @n: number of array elements that will be reversed
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(a[i]);
	}
}
