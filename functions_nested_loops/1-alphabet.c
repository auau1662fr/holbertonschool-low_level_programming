#include <unistd.h>

/**
* main - Entry point of the program
*
* Description: prints 10 times the alphabet
*
* Return: Always 0 (Success)
*/

void print_alphabet(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)  
	{
	_putchar(letter);
	}

	_putchar('\n');
}
{
	print_alphabet();
}
