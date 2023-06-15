#include "lists.h"

/**
 * free_dlistint - frees the list
 * @head: the head pointer of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *f_list;

	while (head)
	{
		f_list = head->next;
		free(head);
		head = f_list;
	}
}
