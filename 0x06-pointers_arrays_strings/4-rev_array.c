#include "main.h"

/**
 * reverse_array - Entry point
 * Description: function that reverses the content of an array of integers.
 * @a: pointer to the array that will be reversed
 * @n: number of array elements that will be reversed
 */

void reverse_array(int *a, int n)
{
	int tmp, i, j;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
