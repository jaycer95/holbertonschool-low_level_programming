#include "holberton.h"
#include <stdlib.h>
/**
 * *string_nconcat - concats two string.
 * @s1: destination.
 * @s2: source.
 * @n: integer.
 * Return: dest.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned  int i = 0, j = 0, k, l;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
s = malloc(sizeof(char) * (i + n + 1));
if (s == NULL)
return (NULL);
for (l = 0; l < i; l++)
{
s[l] = s1[l];
}

for (k = 0 ; k < n; k++)
{
s[k + i] = s2[k];
if (s[k + i] != '\0')
continue;
}
s[k + i] = '\0';
return (s);
}
