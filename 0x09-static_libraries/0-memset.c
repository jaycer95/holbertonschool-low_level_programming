#include "holberton.h"
/**
 * *_memset - fill the first n bytes of the memory area.
 * @s: pointer.
 * @b: bytes.
 * @n: integer
 * Return: dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i;
  for (i = 0; i < n; i++)
    s[i] = b;
  return (s);
}
