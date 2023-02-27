#include "main.h"

/**
 * print_rev - Entry point
 * Description:  prints a string, in reverse, followed by a new line.
 * @s: the string that will be read
 */

void print_rev(char *s)
{
	int a, b;

	a = 0;

	while (s[a] != '\n')
	{
		while (b = a - 1 && b >= 0)
		{
			_putchar(s[b]);
			b--;
		}
		_putchar('\n');
		a++;
	}
}
