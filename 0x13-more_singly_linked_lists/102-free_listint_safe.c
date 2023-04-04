#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to a pointer of the linked list.
 * Return: number of nodes that were freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	/* to keep note of the number of nodes that are freed */
	size_t count = 0;
	/* count would be 0 at this point if either of them are NULL */
	if (h == NULL || *h == NULL)
	{
		return (count);
	}

	while (*h != NULL)
	{
		/* value of temp is updated to point to the next node in list */
		temp = (*h)->next;
		free(*h);
		/* updates *h to point to temp, which is the next node */
		*h = temp;
		/* keeps track of the number of nodes that were freed */
		count++;
	}
	/* after loop is done, *h is reset to NULL */
	*h = NULL;

	return (count);
}
