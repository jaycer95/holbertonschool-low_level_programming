#include "holberton.h"
/**
 * binary_to_uint - converts a number from base 2 to 10
 * @b : string
 * Return: base 10 number
 */
unsigned int binary_to_uint(const char *b)
{
	const char *s = b;
	int i = 0 , base = 1;
	unsigned int val = 0;

	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != '1' && s[i] != '0')
			return (0);
		i++;
	}
	for (;i >= 0; i--)
	{
		if (s[i] == '0')
                {
			base *= 2;
		}
		if (s[i] == '1')
		{
			val += base;
			base *= 2;
		}
}
	return (val);
}
