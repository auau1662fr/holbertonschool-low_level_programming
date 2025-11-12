#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array.
 *
 * @nmemb: number of elements
 *
 * @size: bytes of each element
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (i < (nmemb * size))
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
