#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, 10 times, followed by a new line.
 *
 * Return: void (nothing).
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)  // Repeat 10 times
	{
	for (j = 0; j <= 14; j++)  // Print numbers from 0 to 14
	{
		if (j >= 10)
		_putchar('1');  // Print the tens place for numbers 10-14
		_putchar(j % 10 + '0');  // Print the ones place for all numbers
	}
	_putchar('\n');  // Print newline after each sequence
	}
}

