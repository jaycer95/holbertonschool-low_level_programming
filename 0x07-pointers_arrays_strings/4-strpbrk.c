#include "holberton.h"
/**
 * *_strpbrk - search a string for any set of bytes.
 * @s: string.
 * @accept: string.
 * Return: dest.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s++)
{
  accept++;
if (*s == *accept)
{
return (s);
}
}
return (0);
}
