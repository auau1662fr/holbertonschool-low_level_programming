#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @a:
 *
 * Return: the length of the chain
 */
int _strlen(char *a)
{
	int length = 0;

	while (*a != '\0')
	{
		length++;
		a++;
	}

	return (length);
}

