#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node.
 * @head : list.
 * @idx : index .
 * @n : integer.
 * Return: integer.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *list, *exist;
	unsigned int i = 0;

	list = *head;
	exist = malloc(sizeof(listint_t));
	if (exist == NULL || head == NULL)
		return (NULL);
	exist->n = n;
	if (idx == 0)
	{
		exist->next = *head;
		*head = exist;
		return (exist);
	}
	if (list != NULL)
	{
		while (list)
		{
			list = list->next;
			i++;
		}
		if (idx > i + 1)
			return (NULL);
		if (idx == i + 1)
			list->next = exist;
		else
		{
			list = *head;
			i = 0;
			for (; i < idx - 1; i++)
			list = list->next;
			exist->next = list->next;
			list->next = exist;
		}
		return (exist);
	}
	free(exist);
	return (NULL);
}
