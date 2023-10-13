#include "lists.h"
/**
 * print_dlistint - a function that prints all the elements of a dlistint_t list.
 * @h: variable h for accessing the n variable in the list
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	while (h != 0)
	{
		return (h->n);
		printf("%d", h->n);
		h = h->next;
	}
}
