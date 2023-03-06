#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers.
 * @a: matrix to be calculated
 * @size: the matrix size
 */

void print_diagsums(int *a, int size)
{
	int i, j, k;

	j = 0;
	k = 0;

	for (i = 0; i < size; i++)
	{
		j += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		k += a[i];
		a -= size;
	}
	printf("%d, %d\n", j, k);
}
