#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 */
int main(int argc, char **argv)
{
int num1, num2, calc;
int (*operator)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if ((*argv[2] == '/' || *argv[2] == '%' ) && *argv[3] == '0')
{
printf("Error\n");
exit(100);
}
if (operator == NULL)
{
printf("Error\n");
exit(99);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = get_op_func(argv[2]);
calc = operator(a, b);
printf("%i\n", calc);
return (0);
}
