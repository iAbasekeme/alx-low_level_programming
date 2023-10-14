#include "lists.h"

/**
 * sum_dlistint - A  function that returns the sum of all the data
 * (n) of a dlistint_t linked list.
 * @head: Head of dlistint_t
 *
 * Return: Sum of data in dlistint_t
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp != 0)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
