#include "holberton.h"
/**
 *sr - finds the sqaure root
 *@n: int
 *@i: int
 *Return: int.
 */
int sr(int i, int n)
{
if (i * i == n)
return (i);
if (i <= n)
return (sr(i + 1, n));
else
return (-1);
}
/**
 *_sqrt_recursion - returns the sqaure root of n
 *@n : integer
 *Return: Void.
 */
int _sqrt_recursion(int n)
{
return (sr(0, n));
}
