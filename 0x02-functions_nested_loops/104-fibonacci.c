#include <stdio.h>

/**
 * main - the first 98 Fibonacci numbers
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long fib01 = 0, fib02 = 1, sum;
	unsigned long fib01_01, fib01_02, fib02_01, fib02_02;
	unsigned long half01, half02;

	for (i = 0; i < 92; i++)
	{
		sum = fib01 + fib02;
		printf("%lu, ", sum);

		fib01 = fib2;
		fib02 = sum;
	}
	fib01_01 = fib01 / 10000000000;
	fib02_01 = fib02 / 10000000000;
	fib01_02 = fib01 % 10000000000;
	fib02_02 = fib02 % 10000000000;
	for (i = 93; i < 99; i++)
	{
		half01 = fib01_01 + fib02_01;
		half02 = fib01_02 + fib02_02;
		if (fib01_02 + fib02_02 > 9999999999)
		{
			half01 += 1;
			half02 %= 10000000000;
		}
		printf("%lu%lu", half01, half02);

		if (count != 98)
		{
			printf(", ");
		}
		fib01_01 = fib02_01;
		fib01_02 = fib02_02;
		fib02_01 = half01;
		fib02_02 = half02;
	}
	printf("\n");
	return (0);
}
