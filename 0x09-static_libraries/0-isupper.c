#include "main.h"

/**
 * _isupper - Entry point
 * @c: character to be assessed
 * Description: checks to see if a character is uppercase
 * Return: 1 (success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	{
		return (0);
	}
}
