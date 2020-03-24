#include "lists.h"
/**
 * free_listint2- frees list
 * @head: list
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head != NULL)
	{
		list = *head;
		while (list != NULL)
		{
			list = *head;
			*head = list->next;
			free(list);
		}
	}
}
