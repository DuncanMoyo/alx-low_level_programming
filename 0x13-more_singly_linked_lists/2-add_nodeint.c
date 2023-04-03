#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer to the head of a linked list
 * @n: integer that will be stored in the new node
 * Return: pointer to the new node if successfully created or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* use malloc and it's address to create new_node */
	new_node = malloc(sizeof(listint_t));
	/* if malloc fails to create memory, return NULL */
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* n is kept in the n area of new_node */
	new_node->n = n;
	/* the next area of the new node should point to the current head */
	new_node->next = *head;
	/* head pointer now points to the new node */
	*head = new_node;
	/* the pointer to the new node is then returned */
	return (new_node);
}
