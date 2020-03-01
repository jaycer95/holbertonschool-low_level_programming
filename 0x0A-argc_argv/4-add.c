#include "holberton.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - sums numbers
 * @argc: number of arguments
 * @argv: string
 * Return: 0
 **/
int main(int argc, char *argv[])
{
int i, n = 0;
if (argc <= 1)
printf("0\n");
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (strspn(argv[i], "0123456789") != strlen(argv[i]))
{
printf("Error\n");
return (1);
}
else
{
n += atoi(argv[i]);
}
}
printf("%i\n", n);
}
return (0);
}
