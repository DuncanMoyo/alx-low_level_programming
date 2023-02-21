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

	if (x >= 0)
	{
		return (last_digit);
	}
	{
		return (-last_digit);
	}
}
