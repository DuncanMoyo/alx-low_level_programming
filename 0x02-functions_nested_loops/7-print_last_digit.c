#include "main.h"

/**
 * print_last_digit - Entry point
 * Description: a function that prints the last digit of a number
 * @n: value of parameter
 * Return: last digit of the parameter
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		last *= -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
