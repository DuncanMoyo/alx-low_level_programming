#include "main.h"

/**
 * malloc_checked -  a function that allocates memory using malloc
 * @b: memory to be allocated
 * Return: size of memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
