#include "main.h"

/**
 * _atoi - Entry point
 * Description - Converts a string into an integer
 * @s: The pointer that assesses the conversion
 * Return: An integer
 */

int _atoi(char *s)
{
	unsigned int i = 0;
	int j = 1;

	do {
		if (*s == '-')
		{
			j *= -1;
		} else if (*s >= '0' && *s <= '9')
		{
			i = (i * 10) + (*s - '0');
		} else if (i > 0)
		{
			break;
		}
	} while (*s++);
	return (i * j);
}
