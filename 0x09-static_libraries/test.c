#include <stdio.h>
int main(void)
{
  char *s= "abcdef";
  int i = 0; 
 while (*s)
    {
      i++;
    }
 printf("%i", i);
  return(0);
}
