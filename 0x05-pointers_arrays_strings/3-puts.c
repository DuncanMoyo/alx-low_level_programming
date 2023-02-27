#include "main.h"

/**
 * _puts - Entry point
 * Description: prints a string, followed by a new line
 * @str: pointer to the string that will be printed
 */

void _puts(char *str)
{
	char string[];

	for (str = string; *str != '\0'; str++)
	{
		printf("%c", *str);
	}
	printf("\n");
}
