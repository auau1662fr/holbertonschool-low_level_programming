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

	while (i <= 122)
	{
	putchar(i);
	i++;
	}

	i = 65;
	while (i <= 90)
	{
	putchar(i);
	i++;
	}

	putchar('\n');
	return (0);
}

