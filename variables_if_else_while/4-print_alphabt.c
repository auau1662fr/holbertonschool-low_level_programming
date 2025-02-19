#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: Print all the letters except q and e
*
* Return: Always 0 (Success)
*/+
int main(void)
{
	int i = 97;

	do {
	if (i != 101 && i != 113)
	putchar(i);
	i++;
	} while (i <= 122);

	putchar('\n');
	return (0);
}

