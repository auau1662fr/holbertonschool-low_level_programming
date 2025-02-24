#include <stdio.h>

/**
 * _isupper - Checks if a character is an uppercase letter.
 * @c: The character to be checked.
 *
 * This function checks whether the given character is between 'A' and 'Z'.
 * If it is, the function returns 1, indicating the character is uppercase.
 * Otherwise, it returns 0, indicating the character is not uppercase.
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z') {
	return (1);  /* The character is uppercase */
	}
	return (0);  /* The character is not uppercase */
}

