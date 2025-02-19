#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Write the alphabet in lowercase.
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i = 97;

	do {
	putchar(i);
	i++;
	} while (i <= 122);

	putchar('\n');

	return (0);
}

