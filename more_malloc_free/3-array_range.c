#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - Creates array of integers
 *
 * @min: int
 *
 * @max: int
 *
 *  Return: int array
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
