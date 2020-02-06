#include <stdio.h>
/**
 * main - prints a couple of lines
 * @void: Description of parameter x
(*
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: 0
*/
int main(void)
{
char c, C;
for (c = 'a', C = 'A'; c <= 'z', C <= 'Z'; c++, C++)
{
putchar(c);
putchar(C);
putchar('\n');
}
return (0);
}
