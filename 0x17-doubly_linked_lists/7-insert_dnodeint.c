#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: head
 * @idx: index
 * @n: integer
 * Return: list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *add, *adv = *h;

	add = malloc(sizeof(dlistint_t));
	if (!add || (!*h && idx != 0))
	{
		free(add);
		return (NULL);
	}
	add->n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (adv)
	{
		if (i == idx)
		{
			add->next = adv;
			add->prev = adv->prev;
			adv->prev->next = add;
			adv->prev = add;
			return (add);
		}
		i++;
		adv = adv->next;
	}
	if (i == idx)
		return (add_dnodeint_end(h, n));
	free(add);
	return (NULL);
}
