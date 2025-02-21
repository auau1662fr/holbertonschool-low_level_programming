#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times, in lowercase, followed by a newline.
 *
 * Description: This function prints the alphabet in lowercase 10 times,
 * Each letter of the alphabet is printed using the custom _putchar function.
 */

void print_alphabet_x10(void)

{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
	}
}
