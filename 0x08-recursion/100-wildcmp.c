#include "holberton.h"
/**
 * wildcmp - compare two strings
 *@s1: string
 *@s2: string
 * Return: 1 or 0.
 */
int wildcmp(char*s1,char *s2)
{
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || wildcmp (wildcmp(s1 + 1, s2));
if (*s1 == '\0' && *s2 == '\0')
return (1);
else 
return(0);
}
