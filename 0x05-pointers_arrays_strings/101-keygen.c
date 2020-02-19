#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *
 *
 *
 */
int main(void)
{
int i = 0, n = 0, j = 0;
 char s[509];
srand(time(0));
while ( n <= 2772)
{
j = rand() % 127;
 if (j  > 32)     
{ 
s[i] = j ;
 i++;
 printf("%d\n", s[i]);
}

return (0);
}
