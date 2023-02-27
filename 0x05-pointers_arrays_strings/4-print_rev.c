#include "main.h"

/**
 * print_rev - Entry point
 * Description:  prints a string, in reverse, followed by a new line.
 * @s: the string that will be read
 */

void print_rev(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	for (a -= 1; a >= 0; a--;)
	{
		_putchar(s[a]);
	}
	_putchar('\n');

}
