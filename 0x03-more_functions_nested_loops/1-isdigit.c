#include "holberton.h"
/**
 * _isdigit - checks for digit
 * @c : int
 *
 *_isdigit: checks for digit 0 -9
 *
 * Return: int
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
