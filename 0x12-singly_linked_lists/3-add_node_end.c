#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - A function to insert a node
 * at the end of a linked list.
 * @head: Link to the head Property
 * @str: data type to be inserted
 *
 * Return: New node at the end of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp;
	unsigned int len = 0;

	newNode = (list_t *)malloc(sizeof(size_t));
	while (str[len])
	{
		len++;
	}
	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = 0;
	temp = (*head);

	while (temp->next != 0)
	{
		temp = temp->next;
	}
	temp->next = newNode;

	return (newNode);
}
