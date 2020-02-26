#include "holberton.h"
/**
 *factorial - number factorial
 *@n: integer
 *Return: integer
 */
int factorial(int n)
{
if (n > 1)
return (n * factorial(n - 1));
else if (n == 1)
return (1);
else
return (-1);
}
