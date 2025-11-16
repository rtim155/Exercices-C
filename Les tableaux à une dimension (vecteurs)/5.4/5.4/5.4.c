#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

/*
5.4
Lire n, le nombre d’éléments d’un vecteur v d’entiers de taille max=30.
Saisir les n éléments de v et déterminer k tel que :
• k = -1 si tous les éléments de v sont égaux à 0
• k = indice du premier élément de v différent de 0, donc 0 <= k <= n – 1
*/

int main(void)
{
    srand(time(NULL));
    int nbAlea = rand() % 30 + 1;
    int tab[30] = { 0 };
    int k = -1;

    for (int i = 0; i < nbAlea; i++)
    {
        tab[i] = rand() % 2;
        printf("tab[%d] = %d\n", i, tab[i]);

        if (k == -1 && tab[i] != 0)
        {
            k = i;
        }
    }
    if (k == -1)
    {
        printf("\nTout les nombres valent 0\n");
    }
    else
    {
        printf("\n1er nombre != 0 a l'indice %d\n", k);
    }

    return 0;
}