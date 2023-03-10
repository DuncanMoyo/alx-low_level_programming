#include <stdio.h>

/**
 * main - prints it's name followed by a new line
 * @argc: the length of the count
 * @argv: the items in the array
 * Return: 0 for success
 */

int main(int argc __attribute__((unused)), char *argv[0])
{
	printf("%s\n", argv[0]);

	return (0);
}
