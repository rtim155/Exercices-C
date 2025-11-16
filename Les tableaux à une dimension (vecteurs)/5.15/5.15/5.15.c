#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#define TAILLE 5
/*
5.15
Soit un vecteur d’entiers compris entre -3 et 3. Écrire un programme qui supprime toutes
les occurrences de 0 dans le vecteur en tassant ce dernier. Afficher le vecteur résultat après
tassement.
*/

int main(void)
{
    srand(time(NULL));

    int tab[TAILLE];
    int count = 0;

    for (int i = 0; i < TAILLE; i++)
    {
        tab[i] = rand() % 7 - 3;
        printf("\ntab[%d] = %d\n", i, tab[i]);
    }

    for (int i = 0; i < TAILLE; i++)
    {
        if (tab[i] == 0)
        {
            tab[i] = tab[i + 1];
            count++;
        }
        else
        {
            tab[i] = tab[i + count];
        }
        printf("\ntab[%d] = %d\n", i, tab[i]);
    }
    
    return 0;
}
