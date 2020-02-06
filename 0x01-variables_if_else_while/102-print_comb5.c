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
int i, j, k, l, c;
for (i = 48 ; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
for (k = 48; k <= 57; k++)
{
for (l = 48; l <= 57; l++)
{
if (i + j < k + l)
{
putchar(i);
putchar(j);
putchar(' ');
putchar(k);
putchar(l);
if (i != 57 || j != 56 || k != 57 || l != 57)
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
}
putchar('\n');
return (0);
}
