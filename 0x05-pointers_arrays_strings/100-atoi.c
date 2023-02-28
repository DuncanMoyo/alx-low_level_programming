#include "main.h"

/**
 * _atoi - Entry point
 * Description - Converts a string into an integer
 * @s: The pointer that assesses the conversion
 * Return: An integer
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int j = 0;
	int k = 1;
	int l = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			k *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			l = 1;
			j *= 10 + (s[i] - '0');
			i++;
		}
		if (l == 1)
		{
			break;
		}
		i++;
	}
}
