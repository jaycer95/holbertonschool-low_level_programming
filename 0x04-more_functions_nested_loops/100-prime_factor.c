#include "holberton.h"
#include <stdio.h>
/**
 * main - prints largest factor number
 * @n: 5 digit integer.
 * Return: void.
 */
int main(void)
{
  int i, j;
 long int n,m;
m = 2;
n = 612852475143;
for (i = 3; i < n; i+2)
{
  if (n % i == 0)
{
j = i;
  while (i % j == 0 && j > 0)
    {
j--;
m = i;
    }
}
}
printf("%li", m);
return (0);
}
