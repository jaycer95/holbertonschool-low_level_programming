#include "holberton.h"
#include <stdlib.h>
/**
 * *_memcpy - copies two string.
 * @dest: destination.
 * @src: source
 * @n: unsigned integer.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n; i++)
dest[i] = src[i];
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
unsigned int i = _strlen_recursion(str);
if (str != NULL)
{
dup = malloc(sizeof(char) * (i + 1));
if (dup == NULL)
{
return (NULL);
}
else
{
return ((char *)_memcpy(dup, str, i));
}
}
else
{
return (NULL);
}
}
