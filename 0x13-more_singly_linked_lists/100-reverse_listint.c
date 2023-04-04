#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to a pointer of the head of a linked list
 * Return: pointer to the first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev = NULL;

	while (*head != NULL)
	{
		/* value of next to point to the next node in linked list */
		next = (*head)->next;
		/* next pointer of the current node (*head) to point to prev */
		/* it reverses flow of the link btwn current & prev node */
		(*head)->next = prev;
		/* value of prev to point to the current node */
		prev = *head;
		/* moves head to the next node in the linked list */
		*head = next;
	}
	/* updates *head to point to prev, now the first node of reversed   */
	*head = prev;

	return (*head);
}
