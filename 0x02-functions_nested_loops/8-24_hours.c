#include "holberton.h"
/**
 * jack_bauer - show time.
 *
 * Return: void.
 */
void jack_bauer(void)
{
int i, j, k, l;
for (i = 0; i <= 2; i++)
{
if (i < 2)
{
for (j = 0; j <= 9; j++)
{
for (k = 0; k <= 5; k++)
{
for (l = 0; l <= 9; l++)
{
_putchar(i + '0');
_putchar(j + '0');
_putchar(':');
_putchar(k + '0');
_putchar(l + '0');
_putchar('\n');
}
}
}
}
else if (i == 2)
{
for (j = 0; j <= 3; j++)
{
for (k = 0; k <= 5; k++)
{
for (l = 0; l <= 9; l++)
{
_putchar(i + '0');
_putchar(j + '0');
_putchar(':');
_putchar(k + '0');
_putchar(l + '0');
_putchar('\n');
}
}
}
}
}
}
