#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: count of arguments
 * @av: elements of the arguments
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *ch;

	k = 0;
	l = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			k++;
		}
	}
	k += ac;

	ch = malloc(sizeof(char) * (k + 1));

	if (ch == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ch[l] = av[i][j];
			l++;
		}
		if (ch[l] == '\0')
		{
			ch[l++] = '\0';
		}
	}
	return (ch);
}
