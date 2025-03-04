#include "main.h"

/**
 * _strcat - Concatène deux chaînes de caractères
 * @dest: La chaîne de destination
 * @src: La chaîne source
 *
 * Return: Pointeur vers la chaîne concaténée
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;

	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return dest;
}
