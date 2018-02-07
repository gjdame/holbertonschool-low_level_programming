#include "holberton.h"
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: num to find square root of
 *
 * If no natural square root, returns -1
 * Return: square root of n
 */
int _isequalto(int n)
{
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
}


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return(_sqrt_recursion(_isequalto(n)));
}
