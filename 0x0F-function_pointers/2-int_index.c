#include "function_pointers.h"
/**
 * int_index - returns index
 * @array: array
 * @size: size of array
 * @cmp: function
 * Return: integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || array == NULL || cmp == NULL)
return (-1);
else
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
if (i == 0)
return (1);
return (i);
}
if (i == (size - 1))
return (-1);
}
}
return (0);
}
