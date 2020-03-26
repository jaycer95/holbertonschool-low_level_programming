#include "holberton.h"
/**
 *
 *
 *
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m, b, i, p = 10, l, k;

	m = n;
	while (m >0)
	{
		b += (m % 2)*p;
		m /= 2;
		p *= 10;
		i++;
	}
	if (index > i)
		return (-1);
	l = i - index;
	for (;i >= l; i--)
	{
		b /= 10;
	}
	k = b % 10;
	return(k);
}
