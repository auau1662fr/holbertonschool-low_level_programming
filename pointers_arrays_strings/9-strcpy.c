#include "main.h"

/**
 * _strcpy - function to execute in the program
 * @dest: first integrer
 * @src: second integrer
 *
 * Description: function to copy a string pointed by "src"
 * including the terminating null byte ("\0")
 * to the buffer pointed by dest
 *
 * Return: return the value of the integrer "dest"
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	dest[a] = '\0';

	return (dest);
}
