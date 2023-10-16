#include "lists.h"
/**
 * insert_dnodeint_at_index - A fucntion that inserts
 * node at an index in a list
 * @h: head of the list
 * @idx: index of the list
 * @n: Data from user
 *
 * Return: newNode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *current = *h;
	unsigned int i = 0;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;

	if (idx == 0) /**check if we at the beginning of the list*/
	{
		newNode->prev = 0;
		newNode->next = *h;
		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	for (; current != NULL && i < idx; i++)
	{
		current = current->next;
	}
	if (i < idx)
	{
		free(newNode);
		return (NULL);
	}

	newNode->prev = current;
	newNode->next = current->next;
	current->next = newNode;
	newNode->next->prev = newNode;

	return (newNode);
}
