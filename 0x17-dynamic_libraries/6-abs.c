#include "holberton.h"
/**
 * _abs - absolute value
 * @x: int
 *
 * _abs: returns absolute value of x
 * Return:@result
 */
int _abs(int x)
{
	if (x < 0)
	{
		x = -x;
	}
	return (x);
}
