#include "holberton.h"
/**
 * *_strchr - locate a character in a string.
 * @s: char.
 * @c: char
 * Return: dest.
 */
char *_strchr(char *s, char c)
{
while (*s++)
{
if (*s == c)
{
return (s);
}
}
return (0);
}
