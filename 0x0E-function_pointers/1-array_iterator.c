#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - iterates through array
 * @array: array
 * @size: size of array
 * @action: function
 *
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
unsigned int i;

if (array == NULL || size <= 0 || action == NULL)
return;

i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
