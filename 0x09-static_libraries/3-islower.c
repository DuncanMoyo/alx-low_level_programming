#include "main.h"

/**
 * _islower - Entry point
 * @c: the parameter that will be checked
 * Description: a function that checks for lowercase character.
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
