#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the program
 * @argc - number of arguments
 * @argv - string
 * Return: 0
 **/
int main(int argc, char *argv[])
{
int i;
for(i = 0; i <= argc - 1; i++)
{
printf("%s\n", argv[i]);
}
(void)argc;
return(0);
}
