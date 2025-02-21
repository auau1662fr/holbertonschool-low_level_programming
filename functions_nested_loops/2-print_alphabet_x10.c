#include <main.h>

/**
 *
 * print_alphabet -  function that prints the alphabet
 *
 */


// Déclaration de la fonction _putchar
void _putchar(char c);

void print_alphabet_x10(void)
{
	int i, j;

	// Boucle externe qui s'exécute 10 fois
	for (i = 0; i < 10; i++)
	{
	// Boucle interne pour imprimer l'alphabet
	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
	}
}

