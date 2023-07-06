#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * insert_nodeint_at_index - A function that inserts a new node at a given
 * @head: Pointer to the head property
 * @idx: Index at which the node is to be created
 * @n: Node to be created
 *
 * Return: position of newNode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *temp = *head;
	unsigned int count = 0;

	if (!head)
		return (NULL);

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
