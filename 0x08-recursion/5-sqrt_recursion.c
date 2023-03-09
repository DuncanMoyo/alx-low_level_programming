#include "main.h"
int _sqrt(int n, int x);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to be squared
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt(0, n));
}

/**
 * _sqrt - return root of number
 * @n: the number to be checked
 * @x: squares of the number
 * Return: the squares
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
	{
		return (-1);
	} else if (n * n == x)
	{
		return (n);
	}
	return (_sqrt(n + 1), x);
}
