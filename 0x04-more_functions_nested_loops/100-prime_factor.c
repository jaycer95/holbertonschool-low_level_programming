#include "holberton.h"
#include <stdio.h>
/**
 * main - prints largest factor number
 * @n: 5 digit integer.
 * Return: void.
 */
int main(void)
{
int i;
 long int n,m;
m = 2;
n = 612852475143;
for (i = 2; i <= n; i++)
{
if (n % i == 0 && i % m > 0)
{
m = i;
}
}
printf("%li", m);
return (0);
}
