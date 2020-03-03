#include "holberton.h"
#include <stdlib.h>
/**
 * *argstostr - concatenates all the arguments.
 * @ac: number of arguments.
 * @av: arguments.
 * Return: string
 */
char *argstostr(int ac, char **av)
{
int i, j = 0, k = 0, a = 0;
char *arg;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
k++;
k++;
}
arg = malloc(sizeof(char) * (k + 1));
if (arg == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
arg[a] = av[i][j];
a++;
}
arg[a] = '\n';
 a++;
}
arg[a] = '\0';
return (arg);
}
