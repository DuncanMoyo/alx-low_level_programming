#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @f: pointer to string
 * @name: print the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
	{
		f(name);
	}
}
