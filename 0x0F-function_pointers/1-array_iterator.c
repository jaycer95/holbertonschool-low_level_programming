#include "function_pointers.h"
/**
 * array_iterator - executes function
 * @array: array
 * @size: size
 * @action: function
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i = 0;
if (array == NULL || size == 0 || action == NULL)
return;
while (i <= size)
action(array[i]);
}
