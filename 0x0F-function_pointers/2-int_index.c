#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the input array
 * @size: the length of the array
 * @cmp: pointer to the function used to check the values
 * Return: -1 if 0 else index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
