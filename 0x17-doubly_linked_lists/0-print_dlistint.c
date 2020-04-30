#include "lists.h"
/**
 *
 *
 *
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	sizet_t i;
	dlistint_t *t = h;
	while(t)
	{
		printf("%i", t->n);
		t = t->next;
		i++;
	}
	return (i);
}
