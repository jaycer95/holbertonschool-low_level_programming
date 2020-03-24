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
