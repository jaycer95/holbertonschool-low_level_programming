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
if (*s == *accept)
{
return (s);
}
accept ++;
}
return (0);
}
