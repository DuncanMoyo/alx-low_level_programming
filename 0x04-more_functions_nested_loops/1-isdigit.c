#include "main.h"

/**
 * _isdigit - Entry point
 * Description: checks to see if a character is a digit
 * @c: character to be assessed
 * Return: 1 (SUCCESS)
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	{
		return (0);
	}
}
