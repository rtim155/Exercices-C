#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

/*
5.11
Soit un vecteur d’entiers (saisie manuelle des éléments) :
1. déterminer si les éléments sont strictement croissants
2. ou strictement décroissants
3. ou tous égaux
On affichera un message explicite correspondant.
*/


int main(void)
{
    int tab[3] = { 0 };
    int countPlus = 1;
    int countMoins = 1;
    int countEgal = 1;

    for (int i = 0; i < 3; i++)
    {
        printf("\nEntre un nombre : ");
        scanf("%d", &tab[i]);

        if (i != 0)
        {
            if (tab[i] > tab[i - 1])
            {
                countPlus++;
            }
            else if (tab[i] < tab[i - 1])
            {
                countMoins++;
            }
            else
            {
                countEgal++;
            }
        }  
    }
    if (countPlus == 3) printf("\nLes nombres sont strictement croissants\n");
    else if (countMoins == 3) printf("\nLes nombres sont strictement decroissants\n");
    else if (countEgal == 3) printf("\nLes nombres sont strictement egaux\n");
    else printf("\nOrdre aleatoire\n");
    
    return 0;
}

