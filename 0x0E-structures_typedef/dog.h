#ifndef _DOG_H_
#define _DOG_H_


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
char *_strdup(char *str);
int _strlen(char *str1);
dog_t *new_dog(char *name, float age, char *owner);
int _putchar(char c);

#endif
