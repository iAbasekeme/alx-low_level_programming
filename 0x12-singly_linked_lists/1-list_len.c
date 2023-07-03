#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - a function that returns the
 * number of elements in a linked list_t list.
 * @h: link to the head property
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	if (!temp)
		return (0);
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
