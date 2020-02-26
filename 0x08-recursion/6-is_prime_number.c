#include "holberton.h"
/**
 * ipn - checks prime number
 * @i: int
 * @n: int
 * Return: integer.
 */
int ipn(int i, int n)
{
if (n == i)
return (1);
if (n % i == 0)
return (0);
else
return (ipn(i + 1, n));
}
/**
 * is_prime_number - checks prime number
 * @n: int
 * Return: integer.
 */
int is_prime_number(int n)
{
if (n < 2)
return (0);
else
return (ipn(2, n));
}
