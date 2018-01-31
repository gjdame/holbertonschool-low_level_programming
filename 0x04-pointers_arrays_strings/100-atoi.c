#include "holberton.h"
#include <stdio.h>
#include "2-strlen.c"
/**
 * _atoi - converts string to number
 * @s : pointer int
 *
 * _atoi: converts string to number
 *
 * Return: int
 */
int _atoi(char *s)
{
	int i;
	int check_num;
	unsigned sum;
	unsigned x;
	int pos_neg;

	pos_neg = 0;
	check_num = 0;
	sum = 0;
	for (i = 0; i < _strlen(s); i++)
	{
		if ((s[i] > '9' || s[i] < '0') && check_num > 0)
			break;
		if (s[i] == '+')
			pos_neg++;
		if (s[i] == '-')
			pos_neg--;
		if (s[i] >= '0' && s[i] <= '9')
			check_num++;
	}
	i = i - 1;
	x = 1;
	while (check_num > 0)
	{
		sum = sum + ((s[i] - '0') * x);
		x = x * 10;
		i--;
		check_num--;
	}
	if (pos_neg >= 0)
	{
		sum = sum * 1;
	}
	else if (pos_neg < 0)
	{
		sum = sum * -1;
	}
	return (sum);
}
