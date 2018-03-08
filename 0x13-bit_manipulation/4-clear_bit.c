#include "holberton.h"
#include "2-get_bit.c"
/**
 * clear_bit - set bit to 0
 * @n: pointer to in
 * @index: point to change
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	(*n) &= ~(1 << index);
	if (get_bit((*n), index) == 0)
		return (1);
	return (-1);
}
