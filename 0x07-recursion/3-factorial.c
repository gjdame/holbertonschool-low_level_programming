#include "holberton.h"
/**
 * int factorial - returns factorial of a given number
 * @n: int n
 *
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return(-1);
	if (n == 0)
		return(1);
	if (n == 1)
		return(1);
	return (n * factorial(n - 1));
}
