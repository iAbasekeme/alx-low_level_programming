#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: A pointer to the head property
 */
void free_listint2(listint_t **head)
{
	listint_t *nextNode;

	if (*head == NULL)
		return;
	while (*head)
	{
		nextNode = (*head)->next;
		free(*head);
		*head = nextNode;
	}
	*head = NULL;
}
