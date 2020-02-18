#include "holberton.h"
/**
 * rev_string - reverse string.
 * @s: pointer.
 * Return: void.
 */
void rev_string(char *s)
{
int n = 0, j;
char x[509];
while (s[n] != '\0')
{
x[n] = s[n];
n++;
}
 n--;
for (j = n; j >= 0; j--)
{
s[n-j]=x[j];
}
}
