#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

/*
5.10 Recherche du maximum
Écrire un programme qui recherche dans un vecteur de nombres entiers l’élément de
valeur maximale. On affichera cette valeur ainsi que la position de l’élément au sein du vecteur.
*/


int main(void)
{
    srand(time(NULL));

    int nbMax = 0;
    int pos = 0;
    int tab1[10];

    for (int i = 0; i < 10; i++)
    {
        tab1[i] = rand() % 100 + 1;
        
        if (tab1[i] > nbMax)
        {
            nbMax = tab1[i];
            pos = i;
        }
        printf("\n\tTab1[%d] = %d Nombre MAX = %d\n", i, tab1[i], nbMax);
    }
    printf("\n\tNombre MAX = %d a l'indice %d\n", nbMax, pos);

    return 0;
}

