#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the pointer to the head of a linked list
 * @n: value to be stored in the new node
 * Return: pointer new node if successfully created or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;
	/* memory allocated using malloc, stored in new_node */
	new_node = malloc(sizeof(listint_t));
	/* if malloc() fails, return NULL */
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* sets the value of n in the n field of the new node  */
	new_node->n = n;
	/* sets its next field to NULL */
	new_node->next = NULL;
	/* if *head is NULL, the list is empty */
	/* if it is, *head is updated to point to new node */
	if (*head == NULL)
	{
		*head = new_node;
	} else
	/* if list is not empty, this executes */
	/* sets temp point to point to the head of the list */
	/* traversesall nodes until it reaches the last node */
	/* the next field of the last node then points to the new node */
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	/* pointer to the new node */
	return (new_node);
}
