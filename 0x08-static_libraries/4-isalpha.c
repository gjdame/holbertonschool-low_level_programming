#include "holberton.h"
/**
 * _isalpha - checks whether number is lowercase or not
 * @c:int to be checked
 *
 * _isalpha: checks whether int c is lowercase or not.
 * Return:0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
