#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
int l;
l = n % 10;
 if (l > 0)
{
_putchar(l+'0');
return(l);
}
else 
{
_putchar(-l+'0');
return(-l);
}
}


