#include "lists.h"

/**
 * add_node_end - A function to insert a node
 * at the end of a linked list.
 * @head: Link to the head Property
 * @str: data type to be inserted
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
	newNode->next = NULL;
	temp = (*head);

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
}