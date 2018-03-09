#include "holberton.h"
/**
 * get_endianness - check endianess. Return 1 if little indian
 * Return: 1 if true, 0 if false
 *
 */
int get_endianness(void)
{
	int n;

	n = 1;
	if (*(char *)&n == 1)
		return (1);

	return (0);
}
