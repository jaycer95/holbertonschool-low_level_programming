#include "holberton.h"
#include <stdlib.h>
/**
 * *string_nconcat - concats two string.
 * @s1: destination.
 * @s2: source.
 * @n: integer.
 * Return: dest.
 */
char *string_nconcat(char *s1, char *s2,unsigned int n)
{
  int i, j = 0;
  while (s1[i] != '\0')
    {
      i++;
    }
  s1 = malloc(sizeof(char) * (i + n));
    if (s1 == NULL)
      return (NULL);
  for (j = 0 ; s2[i] != '\0' ; j++)
    {
      if (j < n)
	{
	  s1[j + i] = s2[j];
	}
      else
	{
	  s1[j + i] = '\0';
	}
    }
  return (s1);
}
