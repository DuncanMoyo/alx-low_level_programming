#include "main.h"

/**
 * print_last_digit - Entry point
 * Description: a function that prints the last digit of a number
 * @c: value of parameter
 * Return: last digit of the parameter
 */

int print_last_digit(int c)
{
	int last_digit = c % 10;

	if (c < 0)
	{
		_putchar(-last_digit);
	}
	return (last_digit);
}
