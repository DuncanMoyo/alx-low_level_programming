#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: reverses the string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursions(s + 1);
	}
}
