#include <stdio.h>
/**
* main - Entry point of the program
*
* Description: Write a function that checks for uppercase character
*
* Returns 1 if the character is an uppercase letter, otherwise 0.
*/
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}

