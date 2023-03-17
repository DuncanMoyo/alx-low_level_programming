#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previous allocated space
 * @old_size: size of space that was occupied
 * @new_size: new space to be allocated
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	} else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	} else if (new_size > old_size)
	{
		new_size = old_size
	}

}
