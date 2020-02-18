#include "holberton.h"
/**
 * puts_half - print half last numbers.
 * @str: pointer.
 * Return: void.
 */
void puts_half(char *str)
{
  int i = 0, j, x;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 0)
{
x = (i / 2) ;
}
if (i % 2 != 0)
{
  x = ((i - 1) / 2) + 2;
 }
for (j = x; j <= i - 1; j++)
  {
_putchar(str[j]);
}
_putchar('\n');
}
