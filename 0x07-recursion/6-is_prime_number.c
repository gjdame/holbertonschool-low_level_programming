#include "holberton.h"
/**
 * prime - returns if n is prime or not
 * @s: number to be checked
 * @r: number to check against s to see if prime
 * Return: 1 if prime. 0 if not.
 */
int prime(int s, int r)
{
	if (r > s)
		return (0);
	if (s % r == 0 && s != r)
		return (0);
	if (s % r != 0 && s != r)
		return (prime(s, r + 1));
	return (1);
}
/**
 * is_prime_number - returns if n is prime or not
 * @n: number to be checked
 *
 * Return: 1 if prime. 0 if not.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime(n, 2));
}
