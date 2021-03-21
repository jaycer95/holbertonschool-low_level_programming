#include "search_algos.h"
/**
 * linear_search - apply linear search
 * @array: array to search
 * @size: size of array
 * @value: value to find
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
int i = 0;
size_t j;
if (!array)
return (-1);
for (j = 0; j <= size; j++)
{
printf("Value checked array[%d] = [%d]\n", i, *array);
if (*array == value)
return (i);
i++;
array++;
}
return (-1);
}
