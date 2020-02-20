#include "holberton.h"
/**
 * *leet - encoding.
 * @s: string.
 * Return: s.
 */
char *leet(char *s)
{
int i, j;
char m[] = "aAeElLoOtT";
char p[] = "4433110077";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j <= 9; j++)
{
if (s[i] == m[j])
{
s[i] = p[j];
}
}
}
return (s);
}
