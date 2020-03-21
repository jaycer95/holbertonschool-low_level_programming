#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a node
 * @head: head.
 * @str: string.
 * Return: node.
 */
list_t *add_node(list_t **head, const char *str)
{
  list_t *list;
  char *s;
  unsigned int i;
  s = strdup(str);
  if (s == NULL)
    return (NULL);
  while (s)
    {
      i++;
    }
  list = malloc(sizeof(list_t));
  if (list == NULL)
    return (NULL);
  list->str = s;
  list->len = i;
  list->next = NULL;
  if (head != NULL)
    list->next = *head;
  *head = list;
  return (*head);
}
