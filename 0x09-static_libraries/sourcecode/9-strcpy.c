#include "holberton.h"
/**
 * *_strcpy - print half last numbers.
 * @src: pointer.
 * @dest: pointer
 * Return: char.
 */
char *_strcpy(char *dest, char *src)
{
  int n = 0, i;
  while (src[n] != '\0')
    {
      n++;
    }
  for (i = 0; i <= n; i++)
    {
      dest[i] = src[i];
    }
  return (dest);
}
