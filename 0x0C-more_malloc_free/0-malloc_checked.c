#include "holberton.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocate memory.
 * @b: size;
 * Return: void.
 */
void *malloc_checked(unsigned int b)
{
char *t;
t = malloc(b);
if (t == NULL)
exit(98);
return(t);
}
