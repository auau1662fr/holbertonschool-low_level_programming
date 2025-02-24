#include "main.h"

/**
 * print_line - Prints a line of underscores.
 * @n: Number of underscores to print.
 *
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
	int i;
	for (i = 0; i < n; i++)
	{
	_putchar('_');
	}
	}
	_putchar('\n');
}

