#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Point d'entrée du programme
 *
 * Description : Cette fonction génère un nombre aléatoire, calcule son dernier chiffre,
 * et affiche ce dernier chiffre avec le message approprié.
 *
 * Retour : 0 (succès)
 */
int main(void)
{
    int n;
    int Dernier_chiffre;

    srand(time(0)); /* Initialise le générateur de nombres aléatoires */
    n = rand() - RAND_MAX / 2; /* Génère un nombre aléatoire */

    dernier_chiffre = n % 10; /* Obtenez le dernier chiffre du nombre */

    /* Affiche la première partie de la sortie */
    printf("Dernier chiffre de %d est %d", n, dernier_chiffre);

    /* Vérifie la valeur du dernier chiffre et affiche le message correspondant */
    if (dernier_chiffre > 5)
    {
        printf(" et est supérieur à 5\n");
    }
    else if (dernier_chiffre == 0)
    {
        printf(" et est 0\n");
    }
    else
    {
        printf(" et est inférieur à 6 et différent de 0\n");
    }

    return 0;
}

