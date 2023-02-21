#include "main.h"

/**
 * print_sign - Entry point
 * @n: parameter that inputs he value of an integer
 * Description: a function that prints the sign of a number
 * Return: + if greater than 0, - if not and 0 if equal
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	{
		_putchar('0');
		return (0);
	}
}
