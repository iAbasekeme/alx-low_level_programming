#include "lists.h"
/**
 * print_dlistint - a function that prints all the
 * elements of a dlistint_t list.
 * @h: variable h for accessing the n variable in the list
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t u = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		u++;
	}
	return (u);
}
