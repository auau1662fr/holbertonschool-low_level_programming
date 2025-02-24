#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9, except 2 and 4.
 * This function prints each digit from '0' to '9', except
 * for '2' and '4'.It uses a loop to check each digit and
 * skips '2' and '4'.After printing, it prints a newline
 * to format the output.
 * Return: void (nothing).
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	/* Skip '2' and '4' */
	if (!(c == '2' || c == '4'))
	_putchar(c);  /* Print the current character */
	}
	_putchar('\n');  /* Print a newline after the numbers */
}

