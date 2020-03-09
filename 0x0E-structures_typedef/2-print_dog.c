#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print struct dog.
 * @d: dog.
 * Return: void.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name = "(nil)";
if (d->age == 0)
printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
if (d->owner == NULL)
d->owner = "(nil)";
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
