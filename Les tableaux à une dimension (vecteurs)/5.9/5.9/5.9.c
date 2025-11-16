#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

/*
5.9 Décomposition d’un entier
Décomposer un nombre entier en ses différents chiffres constitutifs et placer ces derniers
dans un vecteur. Afficher le vecteur.
*/


int main(void)
{
    int nbDiv = 1;
    int count = 0;
    int nbUser = 0;
    int tab1[5] = { 0 };

    do
    {
        printf("\n\tEntre un chiffre entre 1 et 10000 : ");
        scanf("%d", &nbUser);
    } while (nbUser < 1 || nbUser > 10000);

    int reste = nbUser;

    while (nbUser >= nbDiv)
    {
        nbDiv *= 10;
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        nbDiv /= 10;
        tab1[i] = reste / nbDiv;
        reste %= nbDiv;

        printf("\n\tTab1[%d] = %d\n", i, tab1[i]);
    }

    return 0;
}

