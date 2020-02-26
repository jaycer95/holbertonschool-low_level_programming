#include "holberton.h"
/**
 *_print_rev_recursion - prints a string in rev
 *@s: pointer type char
 *Return: Void
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
