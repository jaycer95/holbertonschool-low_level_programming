#include "holberton.h"
#include <stdlib.h>
/**
 * *_calloc - allocate memory for an array
 * @nmemb: number of members.
 * @size: size of each memb.
 * Return: void.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(size * nmemb);
if (p == NULL)
return (NULL);
return (p);
}
