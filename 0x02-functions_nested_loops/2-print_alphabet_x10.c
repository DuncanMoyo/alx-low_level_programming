#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: a function that prints 10 times the alphabet, in lowercase.
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int x = 0;
	char ch;

	while (x < 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		x++;
	}
}
