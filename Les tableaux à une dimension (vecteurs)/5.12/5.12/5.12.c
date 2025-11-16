#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

/*
5.12
Lire n (nombre d’éléments du vecteur v) ainsi que les n éléments de v[20].
Pour tous les éléments de v, remplacer v[i] par l'inverse de v [n-i-1]
*/

int main(void)
{
    srand(time(NULL));
    int nbTemp = 0;
    int tab[20] = { 0 };
    

    for (int i = 0; i < 20; i++)
    {
        tab[i] = rand() % 100 + 1;
    }
    for (int i = 0; i < 20 /2; i++)
    {
        printf("Tab[%d] = %d Tab[%d] = %d\n", i, tab[i], 20 - i - 1, tab[20 - i - 1]);
        nbTemp = tab[i];
        tab[i] = tab[20 - i - 1];
        tab[20 - i - 1] = nbTemp;
        printf("Tab[%d] = %d Tab[%d] = %d\n", i, tab[i], 20 - i - 1, tab[20 - i - 1]);
    }

    return 0;
}

