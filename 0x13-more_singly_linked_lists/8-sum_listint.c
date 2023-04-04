#include "lists.h"

/**
 * sum_listint - returns sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the head of the the linked list
 * Return: value of sum
 */

int sum_listint(listint_t *head)
{
	/* pointer to a listint_t node called current, initialised to point to */
	/* the head of linked list */
	listint_t *current = head;
	/* used to keep track of all the data (n) in the linked list */
	int sum = 0;

	while (current != NULL)
	{
		/* value of n for the current node is added to the sum */
		sum += current->n;
		/* value of current is updated to point to the next node */
		current = current->next;
	}
	return (sum);
}
