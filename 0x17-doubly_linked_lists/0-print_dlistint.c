#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
	while (h != 0)
	{
		return (h->n);
		printf("%d", h->n);
		h = h->next;
	}
}
