#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of a linked list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	/* used to detect the loops in the linked list */
	const listint_t *hare, *tortoise;
	/* used to keep tabs on the number of nodes in the list */
	size_t count = 0;
	/* as per requirement, exit with 98 */
	if (head == NULL)
	{
		exit(98);
	}
	/* both loops point to head */
	hare = head;
	tortoise = head;
	/* loops stops when conditions are met */
	while (tortoise != NULL && hare != NULL && hare->next != NULL)
	{
		/* prints address and value of current node */
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
		/* updates to point to the next node & node after that */
		tortoise = tortoise->next;
		hare = hare->next->next;
		/* if they are equal, there is a loop in linked list */
		if (tortoise == hare)
		{
			/* address and value is printed coz loop exists */
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			return (count);
		}
	}
	/* if no loop exists in linked list, we continue until end of list */
	while (tortoise != NULL)
	{
		/* each iteration prints address and value of current node */
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
		tortoise = tortoise->next;
	}
	return (count);
}
