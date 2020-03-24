#include "lists.h"
/**
 * sum_listint - sums list data
 * @head: head
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *list = head;
	int k = 0;

	if (list == NULL)
		return (0);
	while (list != NULL)
	{
		k += list->n;
		list = list->next;
	}
	return (k);
}
