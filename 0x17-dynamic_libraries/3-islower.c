#include "holberton.h"
/**
 *_islower- checks whether number is lowercase or not
 * @c: int to be checked
 *
 * _islower: checks whether number is lowercase
 * Return:0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
