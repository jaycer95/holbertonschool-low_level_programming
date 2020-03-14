#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums arguments
 * @n: integer.
 * Return: integer.
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i = 0;
va_list arg;
if (n <= 0)
return (0);
va_start(arg, n);
while (i <= n)
{
sum += va_arg(arg, int);
i++;
}
va_end(arg);
return (sum);
}
