#include "lists.h"
/**
 *
 *
 *
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add;

	if (!head)
		return (NULL);
	add = malloc(sizeof(dlistint_t));
	if (!add)
		return (NULL);
	if (!*head)
	{
		add->n = n;
		add->next = NULL;
		add->prev = NULL;
	}
	else
	{
		add->n = n;
		add->next = *head;
		add->prev = NULL;
		(*head)->prev = add;
	}
	*head = add;
	return (add);
}
