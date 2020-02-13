#include "holberton.h"
/**
 * print_number - prints number
 * @n: 5 digit integer.
 * Return: void.
 */
void print_number(int n)
{
int  a = n / 10000;
int  b = (n / 1000) % 10;
int  c = (n / 100) % 10;
int  d = (n % 100) / 10;
int  e = n % 10;
if (n < 0)
{
a = -a;
b = -b;
c = -c;
d = -d;
e = -e;
_putchar('-');
}
if (a > 0)
{
_putchar(a + '0');
_putchar(b + '0');
_putchar(c + '0');
_putchar(d + '0');
}
else if (a == 0 && b > 0 && c >= 0 && d >= 0)
{
_putchar(b + '0');
_putchar(c + '0');
_putchar(d + '0');
}
else if (a == 0 && b == 0 && c > 0 && d >= 0)
{
_putchar(c + '0');
_putchar(d + '0');
}
else if (a == 0 && b == 0 && c == 0 && d > 0)
{
_putchar(d + '0');
}
_putchar(e + '0');
}
