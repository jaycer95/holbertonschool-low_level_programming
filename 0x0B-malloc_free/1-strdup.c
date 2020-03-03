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
 * *_strdup - duplicate string
 * @str: given string.
 * Return: new string.
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i;
if (str == NULL)
return (NULL);
else
{
i = _strlen(str) + 1;
dup = malloc(sizeof(char) * i);
if (dup == NULL)
return (NULL);
return ((char *)_memcpy(dup, str, i));
}
}
