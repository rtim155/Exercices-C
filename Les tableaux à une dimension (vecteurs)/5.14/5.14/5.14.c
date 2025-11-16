#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#define TAILLE 20

/*
5.14
Soit un vecteur rempli aléatoirement de 0 et de 1. Déterminer la plus grande suite
consécutive de 1 dans ce vecteur (afficher la position de début + la taille).
*/

int main(void)
{
    srand(time(NULL));
    

    int vec[TAILLE];
    int count1 = 0;
    int count2 = 0;
    int pos = 0;

    for (int i = 0; i < TAILLE; i++)
    {
        vec[i] = rand() % 2;
        printf("\n\tvec[%d] = %d\n", i, vec[i]);
        if (vec[i] == 1)
        {
            count1++;
        }
        else
        {
            if (count1 > count2)
            {
                count2 = count1;
                pos = i - count1;
            }
            count1 = 0;
        }
        
    }
    if (count1 > count2)
    {
        pos = TAILLE - count1;
        count2 = count1;
    }
    printf("\n\tSuite de %d commencant a l'indice %d\n", count2, pos);
    
    return 0;
}

