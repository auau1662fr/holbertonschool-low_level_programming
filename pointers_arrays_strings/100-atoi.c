#include "main.h"
#include <limits.h>
/**
 * _atoi - Function to execute in the program
 * @s: first integrer
 *
 * Description: Function to convert a string in a integrer
 * use the integrer "a" as an index to move in the string
 * use the integrer "b" to stock the sign of the string
 * use the integrer "c" to stock the final result
 *
 * Return: return 0 for success
 */

int _atoi(char *s)
{
	int a = 0;
	int b = 1;
	int c = 0;

	while (s[a] != '\0')
	{
		if (s[a] == '-')
			b *= -1;

		else if (s[a] >= '0' && s[a] <= '9')
		{
			if (c > (INT_MAX - (s[a] - '0')) / 10)
			{
				return (b == 1 ? INT_MAX : INT_MIN);
			}
			c = c * 10 + (s[a] - '0');
		}

		else if (c > 0)
			break;

		a++;
	}

	return (c * b);
}
