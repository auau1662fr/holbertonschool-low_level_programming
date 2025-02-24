#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9, except 2 and 4.
 * Return: void (nothing).
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)  
	{
	if (!(c == '2' || c == '4'))  // Skip '2' and '4'
	_putchar(c);  // Print the current character
	}
	_putchar('\n');  // Print a newline after the numbers
}

