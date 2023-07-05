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
	if (*head == NULL)
		return (0);
	listint_t *nextNode;
	listint_t *temp = *head;

	while (temp != NULL)
	{
		nextNode = temp->next;
		free(temp->n);
		free(temp);
		temp = nextNode;
	}
	*head = NULL;
}
