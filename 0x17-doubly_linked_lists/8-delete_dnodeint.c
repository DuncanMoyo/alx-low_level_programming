#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index 
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *prev = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (index > 0 && current != NULL)
	{
		prev = current;
		current = current->next;
		index--;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = prev;
	free(current);

	return (1);
}
