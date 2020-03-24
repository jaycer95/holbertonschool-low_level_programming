#include "lists.h"

/**
 * print_listint - prints a list.
 * @h : list.
 * Return: size_t.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *list = h;
	size_t i = 0;

	while (list)
	{
		printf("%d\n", list->n);
		list = list->next;
		i++;
	}
	return (i);
}
