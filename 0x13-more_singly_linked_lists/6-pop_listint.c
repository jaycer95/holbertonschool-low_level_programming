#include "lists.h"
/**
 * pop_listint - removes the head node and returns its data
 * @head: head of the node
 * Return: data of the removed head
 */
int pop_listint(listint_t **head)
{
	listint_t *list;
	int n;

	list = *head;
	if (list == NULL)
		return (0);
	*head = list->next;
	n = list->n;
	free(list);
	return (n);
}
