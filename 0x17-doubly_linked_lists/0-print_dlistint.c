#include "lists.h"
/**
 *
 *
 *
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	if (!h)
		return (0);
	while(h)
	{
		printf("%i\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
