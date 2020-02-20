#include "holberton.h"
/**
 * *_strncpy - copies two string.
 * @dest: destination.
 * @src: source.
 * @n: integer.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0 ; src[i] != '\0' ; i++)
{
if (i < n)
{
dest[i] = src[i];
}
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
