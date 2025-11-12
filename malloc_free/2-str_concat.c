#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: char pointer
 *
 * @s2: char pointer
 *
 *  Return: strTemp
 */

char *str_concat(char *s1, char *s2)
{
	int x, y, i, j;
	char *n;

	x = 0;
	y = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}
	y++;
	n = malloc(sizeof(char) * (x + y));
	if (n == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < x; i++)
	{
		n[i] =  s1[i];
	}

	for (j = 0; j < y; j++)
	{
		n[i + j] = s2[j];
	}
	return (n);
}
