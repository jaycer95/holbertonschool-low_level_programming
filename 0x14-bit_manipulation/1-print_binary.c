#include "holberton.h"
/**
 * print_binary - prints a binary number
 * @n: decimal integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
        unsigned int m = 32768;
	while (m > 0)
	{
		if ((n & m) == 0)
			m = m >> 1;
	else
	{
	while(m > 0)
	{
		if((n & m) != 0 )
			_putchar('1');
		else
			_putchar('0');
		m = m >> 1 ;
	}
	}
	}
	if (n == 0)
		_putchar('0');
}
