#include "holberton.h"
/**
 * square - returns natural square root of a number
 * @s: num to find square root of
 * @i: num to check against numer
 * If no natural square root, returns -1
 * Return: square root of n
 */
int square(int s, int i)
{
	int x;

	x = i * i;
	if (x > s)
		return (-1);
	if (x == s)
		return (i);
	return (square(s, i + 1));
}
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: num to find square root of
 *
 * If no natural square root, returns -1
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (square(n, 1));
}
