#include "lists.h"

/**
 * add_dnodeint_end -  add new node at the end of the list
 * @head: the head pointer of the list
 * @n: the integer value of the new node
 * Return: address of new wlwmwnr, Else NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_ele, *end;

	new_ele = malloc(sizeof(dlistint_t));
	if (new_ele == NULL)
		return (NULL);

	new_ele->n = n;
	new_ele->next = NULL;

	if (*head == NULL)
	{
		new_ele->prev = NULL;
		*head = new_ele;
		return (new_ele);
	}

	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = new_ele;
	new_ele->prev = end;

	return (new_ele);
}
