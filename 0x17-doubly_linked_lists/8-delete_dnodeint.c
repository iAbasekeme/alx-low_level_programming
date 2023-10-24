#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *delete = *head;
	dlistint_t *save;
	unsigned int position = 0;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		delete = (*head);
		(*head) = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(delete);
		return (1);
	}

	while (current->next != NULL && position < index - 1)
	{
		current = current->next;
		position++;
	}
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}
	save = current->next->next;
	free(current->next);
	current->next = save;
	if (save != NULL)
	{
		save->prev = current;
	}
	return (1);
}
