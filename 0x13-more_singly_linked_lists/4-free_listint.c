#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to the head of a linked list
 */

void free_listint(listint_t *head)
{
	/* temporary pointer */
	listint_t *temp;
	/* loop continues until head is NULL */
	while (head != NULL)
	{
		/* set the pointer to point to head */
		temp = head;
		/* updates head to point to the next node in the list */
		head = head->next;
		/* frees the memory allocated tot he node that temp points to */
		free(temp);
	}
}
