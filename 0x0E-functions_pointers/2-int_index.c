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

if (size <= 0)
return (-1);

i = 0;
while (i < size)
{
if (cmp(array[i]) == 0)
i++;
else
return (i);
}
return (-1);
}
