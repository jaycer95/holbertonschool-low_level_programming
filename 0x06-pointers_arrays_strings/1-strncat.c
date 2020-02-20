#include "holberton.h"
/**
 * *_strncat - concats two string.
 * @dest: destination.
 * @src: source.
 * @n: integer.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j = 0;
while (dest[j] != '\0')
{
j++;
}
for (i = 0 ; src[i] != '\0' ; i++)
{
if (i < n)
{
dest[j + i] = src[i];
}
else
{
dest[j + i] = '\0';
}
}
return (dest);
}
