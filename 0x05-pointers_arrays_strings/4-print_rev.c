#include "holberton.h"
/**
 * print_rev - print reverse.
 * @*str: pointer.
 * Return: void.
 */
void print_rev(char *s)
{
int i = 0, j;
while (str[i] != '\0')
{
i++;
}
for (j = i ; j >= 0; j--)
{
_putchar(s[j]);
}
}
