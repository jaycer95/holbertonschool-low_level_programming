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
int i, j, c;
for (i = 48 ;i <= 56; i++)
{
for (j = 49; j <= 57; j++)
{
if (j > i)
{
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
for (c = 44 ; c >= 32 ; c -= 12)
{
putchar(c);
}
}
}
}
}
putchar('\n');
return (0);
}
