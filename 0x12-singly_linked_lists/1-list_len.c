#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 *  list_len - returns the length of the list .
 * @h : list.
 * Return: length.
 */

size_t list_len(const list_t *h)
{
const list_t *list = h;
unsigned int i = 0;
while (list)
{
list = list->next;
i++;
}
return (i);
}
