#include "lists.h"

/**
 * free_dlistint - A function that frees a list
 * @head: Head of list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *temp;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
