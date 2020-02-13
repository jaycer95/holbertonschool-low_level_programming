#include "holberton.h"
/**
 * more_numbers - prints numbers from 0 to 14
 * Return: void.
 */
void more_numbers(void)
{
int i, j, a, b;
for (j = 1; j <= 10; j++)
{
for (i = 0; i <= 14; i++)
{
a = i % 10;
b = i / 10;
if (b > 0)
{
_putchar(b + '0');
}
_putchar(a + '0');
}
_putchar('\n');
}
}
