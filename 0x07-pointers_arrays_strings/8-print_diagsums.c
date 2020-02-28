#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print sum
 *@a : string
 *@size : size
 *Return: void.
 */
void print_diagsums(int *a, int size)
{
  int i,j,n,m,b,c;
  for (i = 0; i < size; i++)
    {
      for (j = 0; j <size; j++)
	{
	  if (i == j)
	    {
	      b = a[i][j];
	      n += b;
	    }
	}
      c = a[i][n-i];
      m += c;
    }
  printf("%i, ",n);
  printf("%i\n",m);
}
