#include "search_algos.h"
/**
 * print_array - prints array
 * @array: array to print
 * @size: size
 */
void print_array(const int *array, size_t size)
{
size_t i = 0;
printf("Searching in array: ");
while (array && i < size)
{
printf("%d", array[i]);
if (i != size - 1)
printf(", ");
i++;
}
printf("\n");
}
/**
 *binary_search-searches for a value in a sorted array of integers
 *@array:is a pointer to the first element of the array to search in
 *@size: is the number of elements in array
 *@value: is the value to search for
 *
 *Return:-1 if faild or index of value in the array
 */
int binary_search(int *array, size_t size, int value)
{

size_t i = 0;
size_t j = size - 1;
size_t half;
if (array == NULL)
return (-1);
while (i <= j)
{
half = ((i + j) / 2);
print_array(array + i, j - i + 1);
if (array[half] < value)
i = half + 1;
else if (array[half] > value)
j = half - 1;
else
return ((int)half);
}
return (-1);
}
