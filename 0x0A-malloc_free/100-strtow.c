#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * word_count - count # of words to build 2D array
 * @s: char pointer
 * Return: num of words
 */
int word_count(char *s)
{
	int words;
	int i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
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
	int i, j, k, m, words;
	char **s;

	if (str == NULL || str == '\0')
		return (NULL);

	words = word_count(str);

	s = malloc((words + 1) * sizeof(char *));
	if (s == NULL)
		return (NULL);
	i = 0;
	m = 0;
	while (i < words)
	{
		j = m;
		while (str[j] != '\0')
		{
			if (str[j] != ' ' && str[j + 1] == ' ')
			{
				j = m + 1;
				break;
			}
			j++;
		}
		s[i] = malloc(j * sizeof(char));
		if (s[i] == NULL)
		{
			while (i >= 0)
			{
				free(s[i]);
				i--;
			}
			free(s);
		}
		i++;
	}
	i = 0;
	j = 0;
	if (str[0] == ' ')
		j++;
	while (i < words)
	{
		k = 0;
		while (str[j] != '\0')
		{
			if (str[j] != ' ')
			{
				s[i][k] = str[j];
				j++;
				k++;
			}
			else if (str[j] == ' ' && str[j - 1] != ' ')
			{
				j++;
				k++;
				break;
			}
			else
				j++;
		}
		s[i][k] = '\0';
		i++;
	}
	return (s);
}
