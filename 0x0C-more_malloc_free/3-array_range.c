#include "holberton.h"
#include <stdlib.h>
/**
 * *array_range - create an array of integer.
 * @min: min
 * @max: max
 * Return: array.
 */
int *array_range(int min, int max)
{
int *p, i, j;
if (min > max)
return (NULL);
p = malloc(sizeof(int) * (max - min + 1));
if (p == NULL)
return (NULL);
j = min;
for (i = min; i <= max; i++)
{
p[i - j] = min;
min++;
}
return (p);
}
