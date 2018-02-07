#include "holberton.h"
/**
 * _pow_recursion - prints value of int x raised to int y
 * @x: value
 * @y: power that value is raised to
 *
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x *  _pow_recursion(x, y - 1));
}
