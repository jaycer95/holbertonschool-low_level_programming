#include "holberton.h"
/**
 * print_triangle - prints triangle
 * @size: character.
 * Return: void.
 */
void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
if ((i + 1) <= size)
{
for (j = size; j >= (i + 1); j--)
{
_putchar(' ');
}
}
for (k = 1; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
