#include "holberton.h"
/**
 * _atoi - convert string to integer.
 * @*s: pointer.
 * Return: int.
 */
int _atoi(char *s)
{
  int i = 0, j, p = 0, k = 0, l = 0, n=0, q, z=0;
  char m[509];
  while ( s[i] != '\0')
    {
      i++;
    }
  for (j = 0; j <= i; j++)
    {
      if (s[j] == '-')
	k++;
      if (s[j] <= '0' && s[j] >= '9')
	{
	  m[p]=s[j];
	  p++;
	}
    }
      for (q = 0; q <= p; q++)
	{
z = _putchar(m[q]-'0');	  
n += z*(10^(p-q));
	}
       
   return (n);
   
}
