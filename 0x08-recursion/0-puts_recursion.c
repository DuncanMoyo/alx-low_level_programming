#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: the string that will be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	} else
	{
		_putchar([0]);
		_puts_recursion(s + 1);
	}
}
