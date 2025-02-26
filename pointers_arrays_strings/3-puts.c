#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 * @str: the string to be printed
 *
 * Description: Prints the string character by character followed by a newline
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
