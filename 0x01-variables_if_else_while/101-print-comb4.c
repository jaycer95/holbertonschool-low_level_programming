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
int i, j, k, c;
for (i = 48 ; i <= 55; i++)
{
for (j = 49; j <= 56; j++)
{
for (k = 50; k <= 57; k++)
{
if (j > i && k > j)
{
putchar(i);
putchar(j);
putchar(k);
if (i != 55 || j != 56 || k != 57)
{
for (c = 44 ; c >= 32 ; c -= 12)
{
putchar(c);
}
}
}
}
}
}
putchar('\n');
return (0);
}
