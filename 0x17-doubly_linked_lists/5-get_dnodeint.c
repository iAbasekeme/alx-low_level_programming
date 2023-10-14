#include "lists.h"

/**
 * get_dnodeint_at_index - A function that gets the index of a list
 * @head: head of list
 * @index: index of node
 *
 * Return: index node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	for (; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	if (current == NULL)
		return (NULL);
	return (current);
}
