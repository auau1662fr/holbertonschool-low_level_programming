#include "main.h"
#include <stdio.h>

/**
 * print_array - Function to execute in the program
 * @a: First integrer
 * @n: Second integrer
 *
 * Description: Function to print the element of an array
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
