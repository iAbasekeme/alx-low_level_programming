#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * pop_listint - A function that deletes the head node in s node list
 * @head: A pointer to the head property
 *
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int value;

	if (!(*head))
	{
		return (0);
	}
	*head = (*head)->next;
	value = temp->n;
	free(temp);

	return (value);
}
