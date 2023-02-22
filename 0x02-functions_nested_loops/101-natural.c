#include <stdio.h>

/**
 * main - entry point
 * Description: Sum of multiples
 * Return: 0 (success)
 */

int main(void)
{
	int n, total;

	for (n = 1; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			total += n;
		}
	}
	printf("%d\n", total);
	return (0);
}
