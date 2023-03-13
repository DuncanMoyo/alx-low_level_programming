#include "main.h"
#include <stdlib.h>

/**
 * str_concat - entry point
 * Description: concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: concatenated strinf
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (k = 0; s1[k] != '\0'; k++)
	{
		ptr[k] = s1[k];
	}

	for (l = 0; s2[l] != '\0'; l++)
	{
		ptr[k] = s2[l];
		k++;
	}
	return (ptr);
}
