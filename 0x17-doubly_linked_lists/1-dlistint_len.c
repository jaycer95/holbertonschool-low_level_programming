#include "lists.h"
/**
 * dlistint_len - print number of elemnts.
 * @h: doubly linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{

	size_t i = 0;

	if (!h)
		return (0);
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
