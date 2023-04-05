#include "lists.h"

/**
 * find_listint_loop - function that finds a loop in a linked list
 * @head: pointer to the head of a linked list
 * Return: address of the node where the loop starts or NULL if no loop exists
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle = head;
	listint_t *hare = head;
	/* if it returns null, there is no loop */
	while (turtle && hare && hare->next)
	{
		/* move turtle 1 step at a time and hare 2 steps at a time */
		turtle = turtle->next;
		hare = hare->next->next;
		/* if this happens, loop has been found */
		if (turtle == hare)
		{
			/* reset turtle to point to the head of the list */
			turtle = head;
			/* loop will stop once the two pointers */
			/* are pointing at the same node */
			while (turtle != hare)
			{
				/* move both pointers one step at a time */
				turtle = turtle->next;
				hare = hare->next;
			}
			/* once they point at the same node, we found the  */
			/* start of the loop and return the pointer of node */
			return (turtle);
		}
	}
	return (NULL);
}
