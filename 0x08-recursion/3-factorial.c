#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: The number involved in the factorial
 * Return: The value of the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	}
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
