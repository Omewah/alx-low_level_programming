#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a LL
 * @head: the head of the LL
 * @index: the node to get
 * Return: NULL if node doesn't exist, Else get node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
