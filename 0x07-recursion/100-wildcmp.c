#include "holberton.h"
#define NULL 0
/**
 * wildcmp - compares 2 strings and returns if they can be close to identitical
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if true, 0 if false
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	if (*s2 == '*')
		return ((wildcmp(s1, s2 + 1)) || (wildcmp(s1 + 1, s2)));
	return (0);
}
