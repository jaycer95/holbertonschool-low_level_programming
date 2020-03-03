#include "holberton.h"
#include <stdlib.h>
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
/**
 * _strlen_recursion - calculate string length
 * @s: string.
 * Return: integer.
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
/**
 * *_strdup - duplicate string
 * @str: given string.
 * Return: new string.
 */
char *_strdup(char *str)
{
char *dup;
int i = _strlen_recursion(str) + 1;
if (str != NULL)
{
dup = malloc(sizeof(char) * i);
if (dup == NULL)
{
return (NULL);
}
else
{
return ((char *)_strcpy(dup, str));
}
}
else
{
return (NULL);
}
}
