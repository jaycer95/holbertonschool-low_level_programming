#include "holberton.h"
/**
 * _print_rev_recursion - print string in reverse mode
 * @s: string to print
 */
char printrevrecursion(char *s)
{
if (*s != '\0')
printrevrecursion(s + 1);
return(*s);
}
/**
 * is_palindrome - check string if palindrome
 * @s: string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
if (*s == printrevrecursion(s))
return (1);
else 
return (0);
}
