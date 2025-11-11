#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

/*
5.2
On entre un vecteur v1 de n entiers. Afficher ce vecteur. Calculer ensuite le carré de
chaque élément de v1 et mettre les résultats dans un vecteur v2. Afficher v2.
*/

int main(void)
{
    int tab1[5] = { 1, 2, 3, 4, 5 };
    int tab2[5] = { 0 };

    for (int i = 0; i < 5; i++)
    {
        tab1[i] = tab1[i] * tab1[i];
        tab2[i] = tab1[i];

        printf("\nTab2[%d] = %d\n", i, tab2[i]);
    }
    

    return 0;
}