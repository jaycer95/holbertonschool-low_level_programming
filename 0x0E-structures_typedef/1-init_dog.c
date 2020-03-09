#include "dog.h"
/**
 * init_dog - initialize a vaiable of type struct dog.
 * @d: structure.
 * @name: char.
 * @age: float.
 * @owner: char.
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
struct dog;
d->name = name;
d->age = age;
d->owner = owner;
}
