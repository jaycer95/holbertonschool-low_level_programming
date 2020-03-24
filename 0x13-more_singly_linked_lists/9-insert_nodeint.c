#include "lists.h"
/**
 *  listint_len - returns the length of the list .
 * @h : list.
 * Return: length.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *list = h;
	unsigned int i = 0;

	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}
/**
 * insert_nodeint_at_index - inserts a node.
 * @head : list.
 * @idx : index .
 * @n : integer.
 * Return: integer.
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *list = *head, *exist;
	unsigned int i = 0;

	exist = malloc(sizeof(listint_t));
	if (!exist)
		return (NULL);
	exist->n = n;
	exist->next = NULL;
	if (idx == 0)
	{
		if (list != NULL)
			exist->next = *head;
		*head = exist;
		return (exist);
	}
	if (list != NULL)
	{
		i = listint_len(head);
		if (idx > i + 1)
			return (NULL);
		if (idx == i + 1)
			list->next = exist;
		else
		{
			list = *head;
			i = 0;
			while (i < idx - 1)
			{
				list = list->next;
				i++;
			}
			exist->next = list->next;
			list->next = exist;
		}
		return (exist);
	}
	free(exist);
	return (NULL);
}
