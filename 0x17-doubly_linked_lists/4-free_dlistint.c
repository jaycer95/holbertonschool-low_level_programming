#include "lists.h"
/**
 * free_dlistint - free list
 * @head: node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *adv = head;

	while (adv)
	{
		adv = head->next;
		free(head);
		head = adv;
	}
}
