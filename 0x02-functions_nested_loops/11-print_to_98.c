#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print number to 98.
 *
 * Return: void.
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
printf("%i, ", i);
}
if (n == 98)
{
printf("\n");
}
}
else
{
for (i = n; i > 98; i--)
{
printf("%i, ", i);
}
printf("\n");
}
}
