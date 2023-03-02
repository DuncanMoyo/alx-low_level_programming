#include "main.h"

/**
 * print_number - Entry point
 * Description: Function that prints out an integer
 * @n: Number to print
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	i = n;

	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
