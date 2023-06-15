#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: poinyrt to the head of the linked list
 * @index: index of the node, starting from 0
 * Return: pointer to the nth node of the linked list, or NULL if the opposite
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (i == index)
	{
		return (current);
	} else
	{
		return (NULL);
	}
}
