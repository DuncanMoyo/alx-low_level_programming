#include "main.h"

/**
 *print_alphabet - Entry point
 * Description: a function that prints the alphabet in lowercase
 * Return: 0 (success)
 *
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
