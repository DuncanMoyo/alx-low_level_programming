#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 *
 * @size: size of the array
 * @action: pointer to the function we need to use
 * @array: the array elements
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	/* IF EITHER ARRAY OR ACTION IS NULL, THE FUNCTION DOES NOTHING */
	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
