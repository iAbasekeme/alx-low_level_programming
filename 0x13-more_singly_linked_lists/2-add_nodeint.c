#include "lists.h"
#include <stddef.h>

/**
 * add_nodeint - A function that adds a
 * node at the beginning of a nodelist
 * @head: the head property
 * @n: The node property to be added
 *
 * Return: Address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = (*head);
	(*head) = newNode;

	return (newNode);
}
