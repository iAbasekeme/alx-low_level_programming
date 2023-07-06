#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint - A function that frees a nodelist
 * @head: Head property
 */
void free_listint(listint_t *head)
{
	listint_t *nextNode;

	while (head)
	{
		nextNode = head->next;
		free(head->n);
		free(head);
		head = nextNode;
	}
}
