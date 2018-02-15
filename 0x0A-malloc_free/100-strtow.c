#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * word_count - helper function to iterate through words
 * @a: int
 * @s: char pointer
 * Return: int
 */
int word_count (int a, char *s)
{
	while (s[a] != '\0')
	{
		if (s[a] == ' ')
			return (a);
		a++;
	}
	return (a);
}
/**
 * strtow - function splits a string into words
 *
 * @s: char pointer
 *
 * Return: pointer to array of strings
 */
char **strtow(char *str)
{
	int i;
	int words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			i++;
		}
		else
			words++;
		i = word_count(i, str);
	}
	printf("%d\n", words);
	return (0);
}
