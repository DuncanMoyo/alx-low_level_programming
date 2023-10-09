#include "search_algos.h"


/**
 * min - returns the minimum of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: the smaller of a and b
 */

int min(int a, int b)
{
	return (a < b ? a : b);
}

/**
 * jump_search - searches for a value in an array of integers using
 * the jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: is the value to search for
 *
 * Return: first index where value is located or -1 if array is NULL or value
 * is not present in the array
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (!array)
		return (-1);

	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%zu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);

		if (prev >= size)
			return (-1);
	}

	printf("Values between [%zu] and [%zu]\n", prev, min(step, size));

	while (array[prev] < value)
	{
		printf("Value checked [%zu] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == min(step, size))
			return (-1);
	}

	if (array[prev] == value)
	{
		printf("Value checked array[%zu] = [%d]\n", prev, array[prev]);
		return (prev);
	}
	return (-1);
}

