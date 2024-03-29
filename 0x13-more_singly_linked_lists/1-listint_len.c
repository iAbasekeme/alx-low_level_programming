#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - a function that returns the
 * number of elements in a linked listint_t list.
 * @h: link to the head property
 *
 * Return: Number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	if (!temp)
		return (0);
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
