#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @idx: the index of the list
 * @n: the integer for the new node
 * Return: address of the new node, Else NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *f_list = *h, *new_ele;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		f_list = f_list->next;
		if (f_list == NULL)
			return (NULL);
	}

	if (f_list->next == NULL)
		return (add_dnodeint_end(h, n));

	new_ele = malloc(sizeof(dlistint_t));
	if (new_ele == NULL)
		return (NULL);

	new_ele->n = n;
	new_ele->prev = f_list;
	new_ele->next = f_list->next;
	f_list->next->prev = new_ele;
	f_list->next = new_ele;

	return (new_ele);
}
