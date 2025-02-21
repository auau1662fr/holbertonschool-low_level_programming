#include <unistd.h>

/**
 * _putchar - Écrit un caractère sur la sortie standard
 * @c: Le caractère à afficher
 */
void _putchar(char c)
{
    write(1, &c, 1);  // Écrit le caractère sur la sortie standard
}
