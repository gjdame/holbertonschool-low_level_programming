#include "holberton.h"
/**
 *
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return ((n >> index) & 1);
}
