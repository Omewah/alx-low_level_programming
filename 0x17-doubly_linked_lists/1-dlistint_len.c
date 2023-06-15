#include "lists.h"

/**
 * dlistint_len - returns the number of elements in LL
 * @h: the head of the list
 *
 * Return: the number of elements in the LL
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
