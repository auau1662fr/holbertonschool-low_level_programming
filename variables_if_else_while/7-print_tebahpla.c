#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: prints alphabet in reverse
*
* Return: Always 0 (Success)
*/
#include <stdio.h>

int main(void)
{
    int i = 122;

    do {
	putchar(i);
	i--;
    } while (i >= 97);

    putchar('\n');
    return (0);
}

