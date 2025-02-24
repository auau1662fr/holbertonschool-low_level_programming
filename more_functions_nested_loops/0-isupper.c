#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Write a function that checks for uppercase character.
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c) {
    if (c >= 'A' && c <= 'Z') {
        return 1;  // Le caractère est en majuscule
    }
    return 0;  // Le caractère n'est pas en majuscule
}

