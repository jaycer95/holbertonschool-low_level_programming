#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_char - print a character.
 * @arg: argument
 * Return: void
 */
void print_char(va_list arg)
{
printf("%c", va_arg(arg, int));
}
/**
 * print_integer - print an integer.
 * @arg: argument
 * Return: void
 */
void print_integer(va_list arg)
{
printf("%i", va_arg(arg, int));
}
/**
 * print_float - print a float.
 *
 * @arg: list of argements.
 */
void print_float(va_list arg)
{
printf("%f", va_arg(arg, double));
}
/**
 * print_string - print a string.
 * @arg: argement
 * Return: void
 */
void print_string(va_list arg)
{
char *p;
p = va_arg(arg, char *);
if (p == NULL)
p = "(nil)";
printf("%s", p);
}
/**
 * print_all - prints all.
 * @format: list of the format 
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list arg;
int i, j;
char *sep = "";
type_t type[] = {
{"c", print_char},
{"i", print_integer},
{"f", print_float},
{"s", print_string},
{NULL, NULL} };
va_start(arg, format);
j = 0;
while (format != NULL && format[j] != '\0')
{
i = 0;
while (type[i].character != NULL)
{
if (format[j] == *(type[i].character))
{
printf("%s", sep);
(type[i].print_func)(arg);
sep = ", ";
break;
}
i++;
}
j++;
}
printf("\n");
va_end(arg);
}
