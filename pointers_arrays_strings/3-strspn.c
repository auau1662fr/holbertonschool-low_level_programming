#include "main.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: string
 *@accept: substring
 *Return: numbers of bytes in the inicial segment of s whitch consist
 *only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int index1, index2, n = 0;

	for (index1 = 0; s[index1] != '\0'; index1++)
	{
		for (index2 = 0; accept[index2] != '\0'; index2++)
		{
			if (s[index1] == accept[index2])
			{
				n++;
				break;
			}
		}
		if (accept[index2] == '\0')
			return (n);
	}
	return (n);
}
