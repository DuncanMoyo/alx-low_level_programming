#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y.
 * @x: the value to be raised
 * @y: the power value
 * Return: the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	} else if (y == 1)
	{
		return (x);
	} else if (y > 1)
	{
		return (_pow_recursion(x, y - 1) * x);
	}
	return (0);
}
