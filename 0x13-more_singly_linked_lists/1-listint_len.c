#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to a struct
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	/* variable count initialized to 0  */
	size_t count = 0;
	/* as long as h is not NULL, count is increment =ed by 1 */
	while (h != NULL)
	{
		count++;
		/* h then points to the next node in the list */
		h = h->next;
	}
	return (count);
}
