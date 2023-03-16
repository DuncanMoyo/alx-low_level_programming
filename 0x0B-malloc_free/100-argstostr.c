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
	char *arg;
	int i, j, count = 0, n = 0;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			count++;
	}
	count += ac;
	arg = (char *)malloc((count + 1) * sizeof(char));

	if (arg == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			arg[n] = av[i][j];
			n++;
		}
		if (arg[n] == '\0')
		{
			arg[n++] = '\n';
		}
	}
	return (arg);
}
