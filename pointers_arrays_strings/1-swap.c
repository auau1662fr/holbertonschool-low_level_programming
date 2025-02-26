#include "main.h"

/**
 * swap_int - Function to execute in the program
 * @a: first integrer
 * @b: second integrer
 *
 * Description: Function to swap the value of two integrer
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
