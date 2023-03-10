#include "main.h"

/**
 * _isalpha - Entry point
 * @c: parameter that takes any character and compares it
 * Return: 1 if c is a letter, lowercase or upper, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
