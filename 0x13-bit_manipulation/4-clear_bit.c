#include "holberton.h"
/**
 * clear_bit - set bit to 0
 * @n: pointer to in
 * @index: point to change
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	(*n) &= ~(1 << index);
	return (1);
}
