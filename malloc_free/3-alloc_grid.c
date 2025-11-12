#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function to allocate memory to grid
 *
 * @width: int arg
 *
 * @height: int arg
 *
 * Return: grid of 0s
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **pp;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	pp = malloc(height * sizeof(int *));

	if (pp == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		pp[i] = malloc(width * sizeof(int));

		if (pp [i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(pp[j]);

			free(pp);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			pp[i][j] = 0;
		}
	}
		return (pp);
}
