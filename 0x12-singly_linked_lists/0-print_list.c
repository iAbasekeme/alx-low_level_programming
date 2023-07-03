#include "lists.h"

/**
 * print_list - A function that prints all the
 * elements of a linked list.
 * @h: link to head property
 *
 * Return: length of Linked list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (!h)
	{
		return (0);
	}
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
