#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - encodes into leet speak
 * @s: char pointer
 * rot13: encodes into leet speak
 * Return: char pointer s
 */
char *rot13(char *s)
{

	int i;
	int j;
	char a[] = "ANBOCPDQERFSGTHUIVJWKXLYMZNAOBPCQDRESFTGUHVIWJXKYLZManbocpdqerfsgthuivjwkxlymznaobpcqdresftguhviwjxkylzm";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (s[i] == a[j])
			{
				s[i] = a[j + 1];
				break;
			}
			j += 2;
		}
		i++;
	}
	return (s);
}
