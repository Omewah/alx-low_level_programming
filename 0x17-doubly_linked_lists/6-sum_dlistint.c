#include "lists.h"

/**
 * sum_dlistint - sums all the data of the LL
 * @head: the head of the list
 * Return: 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int datasum = 0;

	while (head)
	{
		datasum += head->n;
		head = head->next;
	}

	return (datasum);
}
