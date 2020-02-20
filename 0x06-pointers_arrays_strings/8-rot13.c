#include "holberton.h"
/**
 * *rot13 - convert string to integer.
 * @*s: pointer.
 * Return: int.
 */
char *rot13(char *s)
{
int i = 0, j = 0;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char m[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
while (s[i] != '\0')
{
for (j = 0; j < 50; j++)
{
if (s[i] == a[j])
{
s[i] = m[j];
}
}
i++;
}
return (s);
}
