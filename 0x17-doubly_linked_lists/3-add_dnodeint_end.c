#include "lists.h"
/**
 * add_dnodeint_end - add node at the end
 * @head: head
 * @n: integer
 * Return: node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add;
	dlistint_t *adv = *head;

	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;
	if(!(*head))
	{
		add->prev = NULL;
		*head = add;
	}
	else
	{
		while(adv->next)
			adv = adv->next;
		add->prev = adv;
		adv->next = add;
	}
	return (add);
}
