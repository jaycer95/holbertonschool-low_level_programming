#include "holberton.h"
/**
 * *_strspn - get the length of a prefix substring.
 * @s: sting.
 * @accept: string.
 * Return: dest.
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, n = 0;
for (i = 0; accept[i] != '\0'; i++)
{
for (j = 0; s[j] != '\0'; j++)
{
if (s[j] == accept[i])
{
if (n < j)
{
n = j;
}
break;
}
}
}
return (n + 1);
}
