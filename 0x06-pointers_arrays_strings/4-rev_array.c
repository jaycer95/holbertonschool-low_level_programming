#include "holberton.h"
/**
 * reverse_array - reverses an array integers.
 * @a : array.
 * @n : integer.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
int i = 0, j = 0;
int x[509];
for (; i < n; i++)
{
x[i] = a[i];
}
for (j = n - 1 ; j >= 0; j--)
{
a[n - 1 - j] = x[j];
}
}
