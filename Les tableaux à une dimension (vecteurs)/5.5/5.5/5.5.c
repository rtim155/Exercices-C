#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

/*
5.5
Écrire un programme qui inverse l’ordre des nombres entiers contenus dans un vecteur
de maximum 100 éléments.
1. En utilisant un deuxième vecteur
2. Avec un seul vecteur
Pour chaque cas, on affichera le vecteur initial et le vecteur après inversion.
*/

int main(void)
{
    srand(time(NULL));
    int nbAlea = rand() % 10 + 1; 
    
    int tab1[100] = { 0 };
    int tab2[100] = { 0 };
    

    for (int i = 0; i < nbAlea; i++)
    {
        tab1[i] = rand() % 10;
        tab2[nbAlea - i - 1] = tab1[i];

        printf("tab1[%d] = %d  tab2[%d] = %d\n", i, tab1[i], nbAlea - i - 1, tab2[nbAlea - i - 1]);
    }
    for (int i = 0; i < nbAlea / 2; i++)
    {
        int nbTemp = tab1[i];
        tab1[i] = tab1[nbAlea - i - 1];
        tab1[nbAlea - i - 1] = nbTemp;
    }
    printf("\n");
    for (int i = 0; i < nbAlea; i++)
    {
        printf("tab1[%d] = %d\n", i, tab1[i]);
    }
    

    return 0;
}