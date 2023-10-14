#include "lists.h"

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

    if (idx == 0)
    {
        return add_dnodeint(h, n);
    }

    for (; current != NULL && i < idx; i++)
    {
        current = current->next;
    }

    if (i < idx)
    {
        free(newNode);
        return (NULL);
    }

    newNode->prev = current;
    newNode->next = current->next;
    current->next = newNode;
    newNode->next->prev = newNode;

    return (newNode);
}
