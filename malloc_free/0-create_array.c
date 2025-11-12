#include <stdlib.h>
#include "main.h"
/**
 * create_array - Returns a pointer to a newly allocated space in memory.
 *
 * @size: unsigned int
 *
 * @c: char
 *
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	i = 0;


	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	arr[i] = '\0';

	return (arr);
}
