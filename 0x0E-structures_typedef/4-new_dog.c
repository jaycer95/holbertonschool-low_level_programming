#include "dog.h"
#include <stdlib.h>
/**
 * *_strlen - returns a size of a string
 * @str1 : pointer to a string.
 * Return: int.
 */

int _strlen(char *str1)
{
if (*str1 == '\0')
return (0);
return (_strlen(++str1) + 1);
}


/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str : pointer to a string.
 * Return: poiter to a new string.
 */

char *_strdup(char *str)
{
int size = 0, i;
char *p, *str1;
str1 = str;
if (str == NULL)
return (NULL);
size = _strlen(str1);
p = malloc(sizeof(char) * (size + 1));
if (p == NULL)
return (NULL);
else
{
for (i = 0; i < size; i++)
p[i] = str[i];
p[i] = '\0';
return (p);
}
}
/**
 * *new_dog - create a new dog
 * @name: name
 * @age: age.
 * @owner: owner
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_dog;
char *newname;
char *newowner;
if (name == NULL || owner == NULL)
return (NULL);
my_dog = malloc(sizeof(dog_t));
if (my_dog == NULL)
return (NULL);
newname = _strdup(name);
newowner = _strdup(owner);
my_dog->name = newname;
my_dog->age = age;
my_dog->owner = newowner;
(void)* new_dog;
return(my_dog);
}
