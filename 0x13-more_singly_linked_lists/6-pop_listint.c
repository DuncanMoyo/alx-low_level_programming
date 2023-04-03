#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 *
 * @head: pointer to a pointer to a listint_t struct
 * Return: n
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;
	/* if head is null, return 0 */
	if (*head == NULL)
	{
		return (0);
	}
	/* setting n to the value of the n member of the head node */
	n = (*head)->n;
	/* setting temp to point to head */
	temp = *head;
	/* update head to point to the next node in the list */
	*head = (*head)->next;
	/* free memory allocated to the original head node using temp */
	free(temp);

	return (n);
}
