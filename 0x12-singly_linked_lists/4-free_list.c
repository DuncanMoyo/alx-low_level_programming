#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to the head of the list
 */

void free_list(list_t *head)
{
	list_t *ptr, *old;

	ptr = head;
	old = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(old->str);
		free(old);
		old = ptr;
	}
}
