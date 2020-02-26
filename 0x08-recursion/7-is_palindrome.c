#include "holberton.h"
/**
 * strlength - calculates the length of a string
 * @s: string
 *
 * Return: length
 */
int strlength(char *s)
{
if (*s != '\0')
{
return (1 + strlength(s + 1));
}
return (0);
}
/**
 * palindrome - checks if its a palindrome
 * @s: string
 * @l: integer
 *
 * Return: integer
 */
int palindrome(char *s, int l)
{
if (l <= 1)
return (1);
if (*s != *(s + (l - 1)))
return (0);
return (palindrome(s + 1, l - 2));
}

/**
 * is_palindrome - checks if palindrome
 * @s: string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
  return (palindrome(s, strlength(s)));
}
