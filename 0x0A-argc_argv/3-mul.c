#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - converts string to integer
 * @s : string.
 * Return: char.
 */
int _atoi(char *s)
{
unsigned int i = 0, r = 0, minus = 0, x = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
minus++;
if (s[i] >= '0' && s[i] <= '9')
break;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
if ((r * 10) + (s[i] - 48) > 2147483647 && (minus % 2 == 0))
break;
else if (((r * 10) + (s[i] - 48)) > 2147483648 && (minus % 2 != 0))
break;
else
{
if (minus % 2 != 0 && x != 0)
{
r = ((r * 10) + (s[i] - 48)) * -1;
x = 1;
}
else
r = ((r * 10) + (s[i] - 48));
i++;
}
}
if (minus % 2 != 0)
return (-r);
else if (minus % 2 == 0)
return (r);
else
return (0);
}
/**
 * main - prints the name of the program
 * @argc - number of arguments
 * @argv - string
 * Return: 0
 **/
int main(int argc, char *argv[])
{
int _atoi(char *s);
int i, j;
if (argv[1] != '\0' && argv[2] != '\0')
{
i = _atoi(argv[1]);
j = _atoi(argv[2]); 
printf("%i\n", i * j);
}
else
{
printf("Error\n");
return(1);
}
(void)argc;
return(0);
}
