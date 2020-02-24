#include "holberton.h"
/**
 * *_strstr - search a string for any set of bytes.
 * @haystack: string.
 * @needle: string.
 * Return: dest.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *a = haystack;
char *b = needle;
while (*b == *haystack && *a != '\0' && *haystack != '\0')
{
haystack++;
b++;
}
if (*b == '\0')
return (a);
haystack = a + 1;
}
return (0);
}
