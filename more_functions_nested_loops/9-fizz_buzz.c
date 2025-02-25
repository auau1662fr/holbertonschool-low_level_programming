#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Print all number from 1 to 100
 * print Fizz for multiple of 3
 * print Buzz for multiple of 5
 * print FizzBuzz for both
 * separate each number by a space
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%d", a);

		if (a != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
