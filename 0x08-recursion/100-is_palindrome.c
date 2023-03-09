#include "main.h"
#include <string.h>

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: the string to be assessed
 * Return: boolean value
 */

int is_palindrome(char *s)
{
	int str = strlen(s);

	if (str <= 1)
	{
		return (1);
	} else if (s[0] != s[str] - 1)
	{
		return (0);
	}
	return (1);
}
