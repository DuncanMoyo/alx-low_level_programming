#include "main.h"

/**
 * reverse_array - Entry point
 * Description: function that reverses the content of an array of integers.
 * @a: pointer to the array that will be reversed
 * @n: number of array elements that will be reversed
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
