#include "lists.h"

/**
 * print_listint - A function that prints all the elements
 * of a listint_t list
 * @h: The head property
 *
 * Return: All the elements in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	unsigned int count = 0;

	if (!temp)
	{
		return (0);
	}
	while (temp != NULL)
	{
		count++;
	}
	return (count);
}
