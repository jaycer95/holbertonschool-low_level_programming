#include "holberton.h"
/**
 * *cap_string - capitalize first letter of each word.
 * @s : array of char.
 * Return: s.
 */
char *cap_string(char *s)
{
int i = 0, j;
char m[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
if (s[0] >= 97 && s[0] <= 122)
{
s[0] -= 32;
}
for (i = 1; s[i] != '\0'; i++)
{
if (s[i] >= 97 && s[i] <= 122)
{
for (j = 0; m[j] != '\0'; j++)
{
if (s[i - 1] == m[j])
s[i] = s[i] - 32;
}
}
}
return (s);
}
