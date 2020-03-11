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
int a, b, result;
int (*op)(int, int);
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
a = atoi(argv[1]);
b = atoi(argv[3]);
op = get_op_func(argv[2]);
result = op(a, b);
printf("%i\n", result);
return (result);
}
