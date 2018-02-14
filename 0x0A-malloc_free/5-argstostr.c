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

	if (ac == 0 || av == NULL)
		return (NULL);
	height = 0;
	while (av[height] != '\0')
		height++;
	
