#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - prints all natural numbers to 98
 *@n:number
 *
 * print_to_98 : prints natural numbers to 98
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (!(n == 98))
			printf(", ");
		}
		printf("\n");
	}
	else
		{
			for (; n >= 98; n--)
			{
				printf("%d", n);
				if (!(n == 98))
				printf(", ");
			}
			printf("\n");
		}
}
