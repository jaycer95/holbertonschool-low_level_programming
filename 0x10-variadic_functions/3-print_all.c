#include <stdarg.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 *
 *
 */
void print_all(const char * const format, ...)
{
int i, j;
char z;
struct operation 
{
  char *k;
  char *l;
  char *m;
  char *n;
};
struct operation form = {"c", "i", "f", "s"};
va_list arg;
va_start(arg, format);
z = va_arg(arg, int);
while(i != '\0')
{
  while(j <= 3)
    {
      if (z == form[j])
	printf("%(form[j])", z);
      j++;
    }
  i++;
}
}
