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
int i, c;
for (i = 48 ; i <= 57 ; i++)
{
putchar(i);
if (i != 57)
{
for (c = 44 ; c >= 32 ; c -= 12)
{
putchar(c);
}
}
else
{
putchar('\n');
}
}
return (0);
}
