#include "main.h"

/**
 * print_triangle - print a triangle aligned right, using '#'
 * @size: Size of triangle
 */
void print_triangle(int size)
{
	int c, i, j;

	if (size <= 0) {
	_putchar('\n');
	return;
	}

	for (c = 0; c < size; c++) {
	// Print spaces
	for (i = 0; i < size - c - 1; i++) {
	_putchar(' ');
	}

	// Print hashes
	for (j = 0; j < c + 1; j++) {
	_putchar('#');
	}

	// Print new line after each row
	_putchar('\n');
	}
}

