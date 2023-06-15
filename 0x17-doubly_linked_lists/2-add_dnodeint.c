#include "list.h"

/**
 * add_dnodeint - adds a new node at the beginning of the LL
 * @head: pointer to the head of LL
 * @n: the integer value of the new node
 * Return: address of new element, Else NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_ele;

	new_ele = malloc(sizeof(dlistint_t));
	if (new_ele == NULL)
		return (NULL);

	new_ele->n = n;
	new_ele->prev = NULL;
	new_ele->next = *head;
	if (*head != NULL)
		(*head)->prev = new_ele;
	*head = new_ele;

	return (new_ele);
}
