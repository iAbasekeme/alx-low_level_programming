#include "lists.h"

/**
 * add_dnodeint - A function that adds a node at the beging of a doubly-linked lists
 * @head: Head of the list
 * @n: Data from the user
 *
 * Return: address of the newNode
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!newNode)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->prev = 0;

	if (!*head)
	{
		newNode->prev = 0;
		*head = newNode;
	}
	else
	{
		temp = *head;
		newNode->next = temp;
		temp->prev = newNode;
		*head = newNode;
	}
	return (newNode);
}
