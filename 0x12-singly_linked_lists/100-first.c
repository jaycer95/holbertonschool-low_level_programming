#include <stdio.h>

void text_main(void) __attribute__ ((constructor));

/**
 * text_main - print a given message before main.
 *
 * Return: void.
 */

void text_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
