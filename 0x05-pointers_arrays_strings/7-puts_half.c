#include "main.h"

/**
 * puts_half - Entry point
 * Description: a function that prints half of a string
 * @str: string to be assessed
 */

void puts_half(char *str)
{
	int i, j, string;

	string = 0;

	for (i = 0; str[i] != '\0'; i++)

		string++;

	j = (string / 2);

	if (string % 2 == 1)
	{
		j = ((string + 1) / 2);
	}
	for (i = j; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
