#include <stdio.h>

/**
 * main - largest prime factor of 612852475143
 * Return: 0 (success)
 */

int main(void)
{
	long number = 612852475143;
	long divider = 2;
	long prime = 0;

	while (number != 1)
	{
		if (number % divider == 0)
		{
			number /= divider;
			prime = divider;
		}
		divider += 1;
	}
	printf("%ld\n", prime);
	return (0);
}
