#include <stdio.h>

int _isupper(int c) {
    if (c >= 'A' && c <= 'Z') {
        return 1;  // Le caractère est en majuscule
    }
    return 0;  // Le caractère n'est pas en majuscule
}

