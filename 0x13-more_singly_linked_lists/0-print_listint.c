#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint - A function that prints all the elements
 * of a listint_t list
 * @h: The head property
 *
 * Return: All the elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (!h)
	{
		return (NULL);
	}
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
