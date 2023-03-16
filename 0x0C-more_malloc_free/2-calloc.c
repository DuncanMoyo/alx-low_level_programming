#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: the content of the array
 * @size: memory to be allocated
 * Return: the pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* declare variables to be used */
	char *ptr;
	unsigned int i, j;

	/* requirements */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/* memory space */
	j = (nmemb * size);

	ptr = malloc(j);

	if (ptr == NULL)
	{
		return (NULL);
	}
	/* initialize memory spaces with 0 */
	for (i = 0; i < j; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
