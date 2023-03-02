#include "main.h"

/**
 * _strcmp - Entry point
 * Description: a function that compares two strings.
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: combined string
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, k;

	for (i = 0, j = 0; s1[i] != '\0' || s2[j] != '\0'; i++, j++)
	{
		if (s1[i] == s2[j])
		{
			continue;
		} else
		{
			k = s1[i] - s2[j];
		}
		return (k);
	}
	return (0);
}
