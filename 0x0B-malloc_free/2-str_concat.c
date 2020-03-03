#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - calculate string length
 * @s: string.
 * Return: integer.
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
 * *str_concat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: char.
 */
char *str_concat(char *s1, char *s2)
{
int k, l;
int i;
 int j;
char *s;
if (s1 == NULL)
{
s1 = malloc(sizeof(char));
s1 = '\0';
}
if (s2 == NULL)
{
s2 = malloc(sizeof(char));
s2 = '\0';
}
i = _strlen(s1);
j = _strlen(s2);
s = malloc(sizeof(char) * (i + j + 1));
if (s == NULL)
return (NULL);
for (k = 0; k <= i; k++)
{
s[k] = s1[k];
}
for (l = 0; l <= j; l++)
{
s[i + l] = s2[l];
}
return (s);
}
