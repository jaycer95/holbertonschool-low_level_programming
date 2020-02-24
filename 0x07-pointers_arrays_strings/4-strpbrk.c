#include "holberton.h"
/**
 * *_strpbrk - search a string for any set of bytes.
 * @s: string.
 * @accept: string.
 * Return: dest.
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s++)
{
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
return (s);
}
}
}
return (0);
}
