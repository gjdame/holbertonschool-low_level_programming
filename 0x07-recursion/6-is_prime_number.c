#include "holberton.h"
/**
 * is_prime_number - returns if n is prime or not
 * @n: number to be checked
 *
 * Return: 1 if prime. 0 if not.
 */
int is_prime_number(int n);
{
	int i;

	i = 2;
	if (n == 0 || n == 1)
		return (0);
	if (n % i == 0 && n != 2)
		return (0);
	if (i < n)
	{
		i++;
		return (is_prime_number(n));
	}
	return (1);
}
