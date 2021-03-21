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
size_t j;
if (array == NULL)
return (-1);
while (j <= size)
{
printf("Value checked array[%d] = [%d]\n", j, array[j]);
if (array[j] == value)
return (j);
j++;
}
return (-1);
}
