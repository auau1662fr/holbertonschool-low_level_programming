#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - Concatinates two strings
 *
 * @s1: char pointer
 *
 * @s2: char pointer
 *
 * @n: unsigned int
 *
 * Return: Pointer to s1, n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i1, i2, x, j;
	char *r;

	i1 = 0;
	i2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i1] != '\0')
		i1++;
	while (s2[i2] != '\0')
		i2++;

	if (n > i2)
	{
		n = i2;
	}
	r = malloc(sizeof(char) * (i1 + (n + 1)));

	if (r == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < i1; x++)
	{
		r[x] =  s1[x];
	}

	for (j = 0; j < n; j++)
	{
		r[x] = s2[j];
		x++;
	}
	r[x] = '\0';
	return (r);
}
