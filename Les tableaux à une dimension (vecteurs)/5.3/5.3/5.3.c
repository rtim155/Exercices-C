#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

/*
5.3
Soit un vecteur v1 contenant n1 éléments et un vecteur v2 contenant n2 éléments. Les
éléments de ces vecteurs sont saisis au clavier et compris entre 0 et 50.
Écrire un programme qui concatène v1 et v2 en créant un nouveau vecteur v3.
Afficher les 3 vecteurs.
*/

int main(void)
{
    srand(time(NULL));

    int tab1[50] = {0};
    int tab2[50] = {0};
    int tab3[50] = {0};
    int n1 = rand() % 51;
    
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        n1 = rand() % 50 + 1;
        tab1[i] = n1;
        n1 = rand() % 50 + 1;
        tab2[i] = n1;

        printf("\ntab1[%d] = %d", i, tab1[i]);
        
        tab3[i] = tab1[i];
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("\ntab2[%d] = %d", i, tab2[i]);

        tab3[i + 10] = tab2[i];
    }
    printf("\n");

    for (int i = 0; i < 20; i++)
    {
        printf("\ntab3[%d] = %d", i, tab3[i]);
    }

    printf("\n\n");

    return 0;
}