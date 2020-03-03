#include "holberton.h"
#include <stdlib.h>
/**
 * **alloc_grid - return a pointer to a 2D array of integer.
 * @width: width of the array.
 * @height: height of array.
 * Return: pointer or NULL.
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **grd;
if (width <= 0 || height <= 0)
return (NULL);
grd = malloc(sizeof(int *) * height);
if (grd == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grd[i] = malloc(sizeof(int) * width);
if (grd[i] == NULL)
{
for (j = 0; j < i; j++)
free(grd[j]);
free(grd);
return (NULL);
}
}
return (grd);
}
