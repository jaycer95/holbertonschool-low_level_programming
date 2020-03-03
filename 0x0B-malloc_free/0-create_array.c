#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - create array.
 * @size: size of the array
 * @c: character to initialize with
 * Return: pointer to the array , else 0.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *ar;
if (size > 0)
{
ar = malloc(sizeof(char) * size);
if (ar == NULL)
return(NULL);
else
{
while (i <= size)
{
ar[i] = c;
i++;
}
return (ar);
}
}
else
{
return (NULL);
}
}
