#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: char
 * @n: integer
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
int num;
va_list arg;
va_start(arg, n);
while (i < n)
{
num = va_arg(arg, unsigned int);
printf("%d", num);
if (separator != NULL && i != n - 1)
printf("%s", separator);
i++;
}
printf("\n");
va_end(arg);
}
