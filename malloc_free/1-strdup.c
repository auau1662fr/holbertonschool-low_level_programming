#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copy of the string given as a parameter.
 *
 * @str: unsigned int
 *
 * Return: char pointer
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *n;

	i = 0;
	j = 0;

	if (str == NULL)
	{
		return (0);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	n = malloc(sizeof(char) * (i + 1));

	if (n == NULL)
	{
		return (NULL);
	}

	while (j < i)
	{
		n[j] = str[j];
		j++;
	}

	n[j] = '\0';

	return (n);
}
