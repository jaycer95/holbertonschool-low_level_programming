B#include "lists.h"
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
	if (!add)
		return (NULL);
	if (*h == NULL && idx != 0)
	{
		free(add);
		return (NULL);
	}
	add->n = n;
	add->next = NULL;
	add->prev = NULL;
	if (!(*h))
	{
		add->next = *h;
		*h = add;
		return (add);
	}
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
	free(add);
	return (NULL);
}
