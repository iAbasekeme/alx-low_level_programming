#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * delete_nodeint_at_index - a function that deletes the
 * node at index of a listint_t linked list.
 * @head: pointer to the head property
 * @index: index at which node should be deleted
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int count = 0;
    listint_t *nextNode;
    listint_t *temp = *head;
    if (!head || *head == NULL)
        return -1;

    if (index == 0)
    {
        *head = (*head)->next;
        free(temp);
        return (1);
    }
    while (temp != NULL && count < index - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp == NULL)
    {
        return (-1);
    }
    nextNode = temp->next;
    temp->next = nextNode->next;
    free(nextNode);

    return (1);
}