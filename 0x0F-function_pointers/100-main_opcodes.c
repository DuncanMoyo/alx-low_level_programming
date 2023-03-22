#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of memory block in hexadecimal format
 * @p: pointer to the array of bytes
 * @n: number if bytes in the array
 */

void print_opcodes(unsigned char *p, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%02x ", p[i]);
	}
	printf("\n");
}

/**
 * main - entry point
 * @argc: argument
 * @argv: string argument
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int n = atoi(argv[1]);

	if (n <= 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *p = (unsigned char *)main;

	print_opcodes(p, n);
	return (0);
}
