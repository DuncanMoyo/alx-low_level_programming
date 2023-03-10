#include "main.h"

/**
 * print_last_digit - Entry point
 * Description: a function that prints the last digit of a number
 * @x: value of parameter
 * Return: last digit of the parameter
 */

int print_last_digit(int x)
{
	int last_digit = x % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
