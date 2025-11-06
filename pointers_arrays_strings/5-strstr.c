#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to find
 *
 * Return: pointer to beginning of located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
	return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
	for (j = 0; needle[j] != '\0'; j++)
	{
	if (haystack[i + j] != needle[j])
		break;
	}
		if (needle[j] == '\0')
		return (haystack + i);
	}
	return (NULL);
}
