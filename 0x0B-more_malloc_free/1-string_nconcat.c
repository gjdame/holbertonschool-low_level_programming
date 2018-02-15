#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        char *combine;
        unsigned int len1;
        unsigned int len2;
        unsigned int i;

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

	if (n >= len2)
		n = len2;

        combine = malloc((len1 + n) * sizeof(char));
        if (combine == 0)
                return (0);

        i = 0;
        while (s1[i] != '\0')
        {
                combine[i] = s1[i];
                i++;
        }

        i = 0;
        while (i < n)
        {
                combine[len1 + i] = s2[i];
                i++;
        }
        combine[len1 + i] = '\0';
        return (combine);
}
