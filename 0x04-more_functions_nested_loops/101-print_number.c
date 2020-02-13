#include "holberton.h"
/**
 * print_number - prints number
 * @n: 5 digit integer.
 * Return: void.
 */
void print_number(int n)
{
int  b = n / 1000;
int  c = (n / 100) % 10;
int  d = (n % 100) / 10;
int  e = n % 10;
if (n < 0)
{
b = -b;
c = -c;
d = -d;
e = -e;
_putchar('-');
}
if (b > 0)
{
_putchar(b + '0');
_putchar(c + '0');
_putchar(d + '0');
}
else if (b == 0 && c > 0)
{
_putchar(c + '0');
_putchar(d + '0');
}
else if (b == 0 && c == 0 && d > 0)
{
_putchar(d + '0');
}
_putchar(e + '0');
}
