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
	const list_t *temp = h;
	size_t length = 0;

	while (temp != NULL)
	{
		if (temp->str != NULL)
		{
			printf("%s\n", temp->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		length++;
		temp = temp->next;
	}
	return (length);
}
