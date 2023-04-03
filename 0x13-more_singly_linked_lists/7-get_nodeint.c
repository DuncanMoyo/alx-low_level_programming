#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to a listint_t struct
 * @index: index of the node, starting at 0
 * Return: pointer to the nth node if it exists, Nullif it doesn't
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* counter variable i, & pointer variable current to point to head */
	unsigned int i = 0;
	listint_t *current = head;
	/* loop updates current to point to the next node amd increments i */
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	/* if requred node is found, the pointer to that node is returned */
	if (i == index)
	{
		return (current);
	}
	/* if not found. return null */
	return (NULL);
}
