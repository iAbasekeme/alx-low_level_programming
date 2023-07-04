#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - A function that frees a list_t list.
 * @head: Link to the head Property
 */
void free_list(list_t *head)
{
	list_t *nextNode;

	while (head != NULL)
	{
		nextNode = head->next;
		free(head->str);
		free(head);
		head = nextNode;
	}
}
