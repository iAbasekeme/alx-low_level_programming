#include "lists.h"

/**
 * insert_dnodeint_at_index - A fucntion that inserts
 * a node at an index in a list
 * @h: head of the list
 * @idx: index of the list
 * @n: Data from user
 *
 * Return: newNode
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *current = *h;
	unsigned int i = 0;

	if (!*h)
		return (NULL);
	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;

	if (idx == 0) /**check if we at the beginning of the list*/
	{
		return (add_dnodeint(h, n));
	}

	for (; current != NULL && i < idx; i++)
	{
		current = current->next;
	}

	if (current == NULL) /**check if we are at the end of the list*/
	{
		return (add_dnodeint_end(h, n));
	}

	if (i < idx)
	{
		free(newNode);
		return (NULL);
	}

	newNode->prev = current;
	newNode->next = current->next;
	if (current->next) /**Check if current->next is not NULL to avoid segmentation faults*/
	{
		current->next->prev = newNode;
	}

	current->next = newNode;
	return (newNode);
}
