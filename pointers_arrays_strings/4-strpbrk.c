#include "main.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: string
 *@accept: string
 *Return: pointer to the byte in s that matches one of the bytes in
 *accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int index1, index2;

	for (index1 = 0; s[index1] != '\0'; index1++)
	{
		for (index2 = 0; accept[index2] != '\0'; index2++)
		{
			if (s[index1] == accept[index2])
				return (s + index1);
		}
	}
	return (0);
}
