#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - calculates operation.
 * @argc: integer
 * @argv: arguments
 * Return: int.
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
if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
{
printf("Error\n");
exit(100);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = get_op_func(argv[2]);
if (operator == NULL)
{
printf("Error\n");
exit(99);
}
calc = operator(num1, num2);
printf("%i\n", calc);
return (0);
}
