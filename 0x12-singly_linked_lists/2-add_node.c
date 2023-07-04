#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - a function that
 * adds a new node at the beginning of a list_t list.
 * @head: link to the head property
 * @str: The newdata property
 *
 * Return: Number of elements
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *newNode;

	while (str[len])
	{
		len++;
	}
	newNode = (list_t *)malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}
