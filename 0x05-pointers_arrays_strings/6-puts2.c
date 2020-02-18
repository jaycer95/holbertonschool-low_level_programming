#include "holberton.h"
/**
 * puts2 - print even numbers.
 * @str: pointer.
 * Return: void.
 */
void puts2(char *str)
{
int i = 0, j;
while (str[i] != '\0')
{
i++;
}
for (j = 0 ; j <= i - 1; j += 2)
{
_putchar(str[j]);
}
_putchar('\n');
}
