#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an int
 * @array: array
 * @size: size of array
 * @cmp: compare function
 * Return: index where 1st true occurs
 */
int int_index(int *array, int size, int(*cmp)(int))
{
int i;

if (size <= 0 || array == NULL || cmp == NULL)
return (-1);

i = 0;
while (i < size)
{
if (cmp(array[i]) != 0)
return (i);
i++;
}
return (-1);
}
