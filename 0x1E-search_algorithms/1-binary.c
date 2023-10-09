#include "search_algos.h"

/**
 * print_array - prints an array of integers
 *
 * @array: pointer tot the first element of the array to print
 * @start: index to start printing from
 * @end: index to stop printing at
 */

void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d", array[i]);
		if (i < end - 1)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in an array of integers using
 * the binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size;
	size_t mid;

	if (!array)
		return (-1);

	while (start < end)
	{
		print_array(array, start, end);
		mid = (start + end) / 2;
		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid;
		else
			return (mid);
	}
	return (-1);
}
