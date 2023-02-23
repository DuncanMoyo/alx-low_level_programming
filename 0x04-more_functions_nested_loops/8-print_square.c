#include "main.h"

/**
 * print_square - Entry point
 * Description:  a function that prints a square, followed by a new line
 * @size: the size of the square
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
	}
}
