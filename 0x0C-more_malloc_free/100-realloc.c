#include "holberton.h"
#include <stdlib.h>
/**
 * *_realloc - reallocates a memory block.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size of the allocated space for ptr
 * @new_size: the new size
 * Return: void.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size > old_size)
{
free(ptr);
ptr = malloc(new_size);
return (ptr);
}
if (ptr == NULL)
{
ptr = malloc(new_size);
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
return (ptr);
}
