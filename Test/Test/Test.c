#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

/*
5.15
Soit un vecteur d’entiers compris entre -3 et 3. Écrire un programme qui supprime toutes
les occurrences de 0 dans le vecteur en tassant ce dernier. Afficher le vecteur résultat après
tassement.
*/

void encodageTab(int tab, int nbc, int nbl, int nbMax);
void chercheMax(int tab, int nbc, int nbl, int nbMax);

int main()
{
    int tab[100][100];
    int nbl = 0;
    int nbc = 0;
    int nbMax = 100;
    int* ptab = &tab[0][0];

    srand(time(NULL));

    do
    {
        printf("\nEntrez le nombre de lignes : ");
        scanf("%d", &nbl);
    } while (nbl < 1 || nbl > 100);
    do
    {
        printf("\nEntrez le nombre de lignes : ");
        scanf("%d", &nbc);
    } while (nbl < 1 || nbl > 100);

    encodageTab(tab, nbl, nbc, nbMax);

    return 0;
}
void encodageTab(int tab, int nbl, int nbc, int nbMax)
{
    for (int i = 0; i < nbl; i++)
    {
        for (int j = 0; j < nbc; j++)
        {
            tab[i][j] = rand() % 100 + 1;
            tab++;
        }
        tab = tab + nbMax - nbc;
        printf("\n");
    }
}
void chercheMax(int tab, int nbl, int nbc, int nbMax)
{
    int nombreMax = tab[0][0];

    for (int i = 0; i < nbl; i++)
    {
        for (int j = 0; j < nbc, j++)
        {
            if (tab[i][j] > nombreMax)
            {
                nombreMax = tab[i][j];
            }
        }
    }
    printf("\nNombre Max = %d\n", nombreMax);
}