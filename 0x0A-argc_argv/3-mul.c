#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: maximum number of arguments
 * @argv: takes the values and multiplies
 * Return: (Error) if the result is not valid
 */

int main(int argc, char *argv[])
{
	int total = 0;

	if (argc == 3)
	{
		total = (atoi(argv[1]) * atoi(argv[2]))
		printf("%d\n", total);
	} else
	{
		printf("Error/n");
	}
	return (0);
}
