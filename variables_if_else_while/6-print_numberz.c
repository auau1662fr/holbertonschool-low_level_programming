#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: prints all single digit numbers of base 10 starting from 0
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int num;
	
	for (num = 0; num < 10; num++)
	{
		putchar(num + 48);
	}
	putchar('\n');

	return (0);
}

