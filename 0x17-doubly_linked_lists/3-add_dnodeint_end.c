#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a newnode at
 * the end of a doublylists
 * @head: to pointer to head of the list
 * @n: Data from user
 *
 * Return: address of the newnode
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!newNode)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = 0;

	if (!*head)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		temp = *head;
		while (temp->next != 0)
		{
			temp = temp->next;
			temp++;
		}
		temp->next = newNode->prev;
		newNode->prev = temp;
	}
	return (newNode);
}
