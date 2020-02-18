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
for (i = 0; i <= n+2; i++)
{
dest[i] = src [i];
}
return dest;
}
