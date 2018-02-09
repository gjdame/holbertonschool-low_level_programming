#include "holberton.h"
/**
 * _isupper - checks for uppercase letter
 * @c : int
 *
 * _isupper: return 1 if uppercase
 *
 * Return: int
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
