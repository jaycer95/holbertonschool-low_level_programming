#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free list
 * @head: head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *list;

	while (head != NULL)
	{
		list = head;
		head = head->next;
		free(list->str);
		free(list);
	}

}
