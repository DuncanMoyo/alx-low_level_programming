#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index where the new node shold be added
 * @n: value to be stored in the new node
 * Return: address of the new node, if failed, return NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i;
	/* creat a new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	/* if the list is empty and index == 0, update the head */
	if (*h == NULL && idx == 0)
	{
		*h = new_node;
		return (new_node);
	}
	/* Traverse the list to the desired position */
	for (i = 0; i < idx && temp != NULL; i++)
		temp = temp->next;
	/* if temp is NULL & index > than list length, return NULL */
	if (temp == NULL && i < idx)
	{
		free(new_node);
		return (NULL);
	}
	/* Update the links forthe new node */
	new_node->prev = temp->prev;
	new_node->next = temp;
	/* update the links of the adjacent nodes */
	if (temp->prev != NULL)
		temp->prev->next = new_node;
	else
		*h = new_node;
	temp->prev = new_node;
	return (new_node);
}
