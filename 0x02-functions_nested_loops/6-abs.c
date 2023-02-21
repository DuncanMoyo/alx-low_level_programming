#include "main.h"

/**
 * _abs - Entry point
 * Description: a function that computes the absolute value of an integer.
 * @c: number to be compared
 * Return: 0 (success)
 */

int _abs(int c)
{
	if (c >= 0)
	{
		_putchar(c);
	} else
	{
		_putchar(-c);
	}
}
