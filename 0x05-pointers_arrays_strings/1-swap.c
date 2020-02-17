#include "holberton.h"
/**
 * swap_int - swap the value of two integers
 * @*a: pointer integer.
 *@*b: pointer integer.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
int t;
t = *a;
*a = *b;
*b = t;
}
