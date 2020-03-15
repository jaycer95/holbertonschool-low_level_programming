#ifndef _VAR_H_
#define _VAR_H_
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct type
{
  char *character;
  void (*print_func)(va_list);
} type_t;
#endif
