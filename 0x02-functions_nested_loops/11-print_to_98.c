#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
_putchar('i');
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}   
else
{
for (i = n; i > 98; i--)
{
_putchar('n');
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
