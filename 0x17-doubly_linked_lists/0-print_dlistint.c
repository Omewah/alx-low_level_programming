#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: the head of the list
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
    size_t nodes = 0;

    while (h)
    {
        nodes++;
        printf("%d ", h->n);
        h = h->next;
    }

    return (nodes);
}