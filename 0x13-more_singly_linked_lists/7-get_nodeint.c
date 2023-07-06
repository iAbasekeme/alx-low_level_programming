#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * get_nodeint_at_index - a function that returns the
 * nth node of a listint_t linked list.
 * @head: Pointer to the head property
 * @index: index to be searched
 *
 * Return: Listed nth node in listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count = 0;

	while (temp != NULL)
	{
		if (count == index)
			return (temp);

		temp = temp->next;
		count++;
	}
	return (NULL);
}
