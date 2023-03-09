#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: integer to be assessed
 * Return: boolean value
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	} else if (n == 2 || n == 3)
	{
		return (1);
	}

	if (n % 2 == 0)
	{
		return (0);
	}
	if (i * i <= n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		return (is_prime_number(n, i + 2));
	}
	return (1);
}
