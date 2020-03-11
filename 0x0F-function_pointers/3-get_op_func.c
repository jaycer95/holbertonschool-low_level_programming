#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 */
int (*get_op_func(char *s))(int, int)
{
  op_t ops[] = {
  {"+", op_add},
  {"-", op_sub},
  {"*", op_mul},
  {"/", op_div},
  {"%", op_mod},
  {NULL, NULL}
};
while (ops->op != NULL)
{
if (s == ops->op)
return (ops->f);
ops->op++;
}
printf("Error\n");
exit(99);
}
