#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a LL
 * @head: A pointer to the head of the list
 * @index: The index of the node to delete.
 * Return: 1 (Success), Else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *f_list = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (f_list == NULL)
			return (-1);
		f_list = f_list->next;
	}

	if (f_list == *head)
	{
		*head = f_list->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		f_list->prev->next = f_list->next;
		if (f_list->next != NULL)
			f_list->next->prev = f_list->prev;
	}

	free(f_list);
	return (1);
}
