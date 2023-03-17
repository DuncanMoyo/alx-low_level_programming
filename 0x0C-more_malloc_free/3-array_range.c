#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: the min
 * @max: the max
 * Return: the memory that has allocated
 */

int *array_range(int min, int max)
{
	int i, *ptr;

	if (min > max)
	{
		return (NULL);
	}

	/* creating the space in memory */
	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	/* loop and initialize values */
	for (i = 0; min <= max; i++)
	{
		/* increasing the value of min till condition is met */
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
