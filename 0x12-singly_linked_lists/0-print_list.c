#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_list - A function that prints all the
 * elements of a linked list.
 * @h: link to head property
 *
 * Return: length of Linked list
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	if (!h)
	{
		return (0);
	}
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("%s\n", h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		len++;
		h = h->next;
	}

	return (len);
}
