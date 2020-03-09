#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

int _putchar(char c);
struct dog {
char * name;
float age;
char * owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
