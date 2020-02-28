#include "holberton.h"
/**
 * _strcmp - compares two string.
 * @s1: destination.
 * @s2: source
 * Return: dest.
 */
int _strcmp(char *s1, char *s2)
{
  int j = 0, n = 0;
  while (s1[j] == s2[j] && s1[j] != '\0')
    {
      j++;
    }
  n += s1[j] - s2[j];
  return (n);
}
