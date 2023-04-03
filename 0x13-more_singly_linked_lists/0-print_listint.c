#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to a listint_t struct
 * Return: a size_t value
 */

size_t print_listint(const listint_t *h)
{
	/* count will keep note of the number of nodes in the list */
	size_t count = 0;
	/* current points to the head of the list */
	const listint_t *current = h;
	/* runs through each node and prints each value */
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	/* value of count returned */
	return (count);
}
