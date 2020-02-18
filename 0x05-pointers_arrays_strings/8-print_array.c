#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print n element of array.
 * @*a: pointer.
 * @n: integer.
 * Return: void.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n-1; i++)
{
printf("%i", a[i]);
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
