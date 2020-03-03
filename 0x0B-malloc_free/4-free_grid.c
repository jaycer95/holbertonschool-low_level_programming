#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D grid.
 * @grid: pointer.
 * @height: integer.
 * Return: void.
 */
void free_grid(int **grid, int height)
{
int j;
for (j = 0; j < height; j++)
free(grid[j]);
free(grid);
}
