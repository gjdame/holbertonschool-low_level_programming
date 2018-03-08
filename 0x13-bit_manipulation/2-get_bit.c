#include "holberton.h"
/**
 * get_bit - get bit a specific index
 * @n: integer
 * @index: spot to get bit at
 * Return: value of bit at given index
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return ((n >> index) & 1);
}
