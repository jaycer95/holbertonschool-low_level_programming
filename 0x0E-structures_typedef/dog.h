#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

int _putchar(char c);
/**
 * struct dog - structure.
 * @name: char.
 * @age: float.
 * @owner: char.
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * struct dog_t - structure.
 * @name: char.
 * @age: float.
 * @owner: char.
 */
typedef struct dog_t
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
