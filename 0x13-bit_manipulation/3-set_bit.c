#include "holberton.h"
#include "2-get_bit.c"
/**
 * set_bit - sets bit to 1 at given index
 * @n: pointer to int
 * @index: spot to set bit to 1 at
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	(*n) |= (1 << index);
	if (get_bit((*n), index) == 1)
		return (1);
	return (-1);
}
