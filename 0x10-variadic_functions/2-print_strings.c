#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - prints numbers
 * @separator: char
 * @n: integer
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
char *p;
va_list arg;
va_start(arg, n);
while (i < n)
{
p = va_arg(arg, char *);
if (p == NULL)
p = "(nil)";
printf("%s", p);
if (separator != NULL && i != n - 1)
printf("%s", separator);
i++;
}
printf("\n");
va_end(arg);
}
