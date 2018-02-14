#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates 2 strings
 *
 * @s1: char pointer
 * @s2: char pointer
 *
 * Return: pointer to new space of s1 followed by s2
 */
char *str_concat(char *s1, char *s2)
{
	char *combine;
	int len1;
	int len2;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	len2++;
	combine = malloc((len1 + len2) * sizeof(char));
	if (combine == 0)
		return (0);

	i = 0;
	while (s1[i] != '\0')
	{
		combine[i] = s1[i];
		i++;
	}

	i = 0;
	while (s2[i] != '\0')
	{
		combine[len1 + i] = s2[i];
		i++;
	}
	combine[len1 + i] = '\0';
	return (combine);
}
