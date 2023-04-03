#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to a pointer to a listint_t struct
 */

void free_listint2(listint_t **head)
{
	/* temporay pointer */
	listint_t *temp;
	/* if head is null, return */
	if (head == NULL)
	{
		return;
	}
	/* loop until head is not null */
	while (*head != NULL)
	{
		/* tempory pointer to point to the head */
		temp = *head;
		/* head to point to the next node in the list */
		*head = (*head)->next;
		/* free memory for the node temp is pointing to */
		free(temp);
	}
	/* set head to null */
	*head = NULL;
}
