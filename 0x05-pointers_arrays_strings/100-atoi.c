#include "holberton.h"
/**
 * _atoi - convert string to integer.
 * @*s: pointer.
 * Return: int.
 */
int power(int z)
{
  int i, n = 1;
  for (i = 0 ; i < z; i++)
    n *= 10;
  return(n);
}
int _atoi(char *s)
{
int power(int);
unsigned int sign = 1, i = 0, p = 0, q, n = 0;
char m[509];
  while ( s[i] != '\0')
    {
      if ( s[i] == '-')
	{
	  sign *= -1;
	}
      if (s[i] >= '0' && s[i] <= '9')
	{
	  m[p] = s[i];
	  p++;
	}
       i++;
    }
      for (q = 0; q < p; q++)
	{
	  n += (m[q]-48)*power((p-1)-q);
	}
       
   return (n * sign);
   
}
