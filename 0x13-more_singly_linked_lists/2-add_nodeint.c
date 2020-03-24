#include "lists.h"
/**
 * add_nodeint - adds a node
 * @head: head.
 * @n: string.
 * Return: node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *list;

	list = malloc(sizeof(listint_t));
	if (list == NULL)
		return (NULL);
	list->n = n;
	list->next = NULL;
	if (head != NULL)
		list->next = *head;
	*head = list;
	return (*head);
}
