#include "lists.h"
/**
 * *get_dnodeint_at_index - get node at specefic index
 * @head: head node
 * @index : index of node to get
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		i++;
		if (i - 1 == index)
			return (head);
		head = head->next;
	}
}
