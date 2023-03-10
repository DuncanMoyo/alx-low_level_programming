#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main -  a program that adds positive numbers.
 * @argc: number of arguments
 * @argv: list of values
 * Return: sum of positive numbers
 */

int main(int argc, char *argv[])
{
	int i, j, total;

	total = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
