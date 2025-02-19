#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: prints all the numbers of base 16 in lowercase
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;

	do {
	if (i < 10)
	putchar(i + '0');
	else
	putchar(i - 10 + 'a');
	i++;
	} while (i < 16);

	putchar('\n');
	return (0);
}

