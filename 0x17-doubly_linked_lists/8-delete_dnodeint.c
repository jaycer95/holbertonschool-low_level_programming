#include "lists.h"
/**
 *
 *
 *
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *adv = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		adv = head->next;
		free(*head);
		*head = adv;
		if (adv != NULL)
			adv->prev = NULL;
		return (1);
	}
	while (adv)
	{
		if (i == index)
		{
			if (!adv->next)
			{
				adv->prev->next = NULL;
				free(adv);
				return (1);
			}
			adv->next->prev = adv->prev;
			adv->prev->next = adv->next;
			free(adv);
			return (1);
		}
		adv = adv->next;
		i++;
	}
	return (-1);
}
