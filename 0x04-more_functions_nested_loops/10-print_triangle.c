#include "main.h"

/**
 * print_triangle - Entry point
 * Description:  function that prints a triangle,
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	if (n <= 0)
	{
		printf("\n");
	} else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = i; j < n; j++)
			{
				printf(" ");
			}
				for (k = 1; k <= i; k++)
				{
					printf("#");
				}
				printf("\n");
		}
	}
}
