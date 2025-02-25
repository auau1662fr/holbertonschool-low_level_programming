#include "main.h"

/**
 * print_square - print a square
 * @size: size of square
 * Description: Can only use _putchar to print. Use '#' to print square.
 */
void print_square(int size)
{
	int x, y;

	if (size < 1)
	{
	_putchar('\n');
	return;
	}

	for (y = 0; y < size; y++)
	{
	for (x = 0; x < size; x++)
	{
		_putchar('#');
	}
		_putchar('\n');
	}
}

