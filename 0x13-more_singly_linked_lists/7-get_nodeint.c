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
 * get_nodeint_at_index - return the nth node of a listint_t linked list
 * @head: head.
 * @index: index of the node
 * Return: the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *list = head;
	unsigned int i;

	i = listint_len(head);
	if (index > i)
		return (NULL);
	i = 0;
	while (i < index)
	{
		list = list->next;
		i++;
	}
	return (list);
}
