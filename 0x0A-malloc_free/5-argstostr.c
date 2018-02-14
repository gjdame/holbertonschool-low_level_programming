#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of your program
 *
 * @ac: int
 * @av: int
 * Return: char pointer
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i;
	int j;
	int k;
	int size;

	size = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			size++;
			j++;
		}
		i++;
	}
	size = size + ac + 1;

	s = malloc(size * sizeof(char));
	if (s == 0)
		return (0);

	k = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			s[k] = av[i][j];
			j++;
			k++;
		}
		s[k] = '\n';
		k++;
		i++;
	}
	s[k] = '\0';
	return (s);
}
