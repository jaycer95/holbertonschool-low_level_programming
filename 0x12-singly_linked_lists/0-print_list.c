#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints a list.
 * @h : list.
 * Return: size_t.
 */

size_t print_list(const list_t *h)
{
const list_t *list = h;
char *s;
size_t i = 0;
unsigned int size;
while (list)
{
s = list->str;
size = list->len;
if (!s)
{
printf("[0] (nil)\n");
}
else
printf("[%u] %s\n", size, s);
list = list->next;
i++;
}
return (i);
}
