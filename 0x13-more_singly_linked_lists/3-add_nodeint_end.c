#include "lists.h"
/**
 * add_nodeint_end - adds a node
 * @head: head.
 * @n: integer.
 * Return: node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list, *exist;
	char *s;

	list = malloc(sizeof(list_t));
	if (list == NULL)
		return (NULL);
	list->n = n;
	list->next = NULL;
	exist = *head;
	if (exist == NULL)
		*head = list;
	else
	{
		while (exist->next != NULL)
		{
			exist = exist->next;
		}
		exist->next = list;
	}
	return (list);
}
