#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, 10
 * times, followed by a new line.
 * Return: void (nothing).
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
		if (j >= 10)
		_putchar('1');
		_putchar(j % 10 + '0');
	}
	_putchar('\n');
	}
}

