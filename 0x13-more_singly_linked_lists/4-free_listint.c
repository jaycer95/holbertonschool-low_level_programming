#include "lists.h"
/**
 * free_listint - free list
 * @head: head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	while (head != NULL)
	{
		list = head;
		head = head->next;
		free(list->n);
		free(list);
	}

}
