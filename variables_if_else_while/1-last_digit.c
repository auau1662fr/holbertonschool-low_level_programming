#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
    int n;
    int dernier_chiffre;  // Déclaration de la variable en minuscules

    srand(time(0)); 
    n = rand() - RAND_MAX / 2;

    dernier_chiffre = n % 10;  // Utilisation correcte de la variable

    if (n > 0)
    {
        printf("Last digit of %d is %d and is greater than 5\n", n, dernier_chiffre);
    }
    else if (n == 0)
    {
        printf("Last digit of %d is %d and is 0\n", n, dernier_chiffre);
    }
    else
    {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dernier_chiffre);
    }

    return 0;
}

