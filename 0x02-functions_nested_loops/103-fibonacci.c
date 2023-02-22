#include <stdio.h>

/**
 * main - Entry point
 * Description: Adds even numbers up to 4000000
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int j, k, next, total;

	j = 1;
	k = 2;
	total = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			total += j;
		}
		next = j + k;
		j = k;
		k = next;
	}

	printf("%lu\n", total);

	return (0);
}
