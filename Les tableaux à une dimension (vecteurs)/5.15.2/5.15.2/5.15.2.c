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

void afficherTab(int* tab, int taille);
void remplirTab(int* tab, int taille);

int main()
{
    int tab[50];
    int taille = 10;
    int j = 0;

    srand(time(NULL));

    remplirTab(tab, taille);
    afficherTab(tab, taille);

    for (int i = 0; i < taille; i++)
    {
        if (tab[i] != 0)
        {
            tab[j] = tab[i];
            j++;
        }
    }
    printf("\n");
    afficherTab(tab, j);
    printf("\n\n");

    return 0;
}

void afficherTab(int* tab, int taille)
{
    for (int i = 0; i < taille; i++)
    {
        printf(" Tab[%d] = %d", i, tab[i]);
    }
}
void remplirTab(int* tab, int taille)
{
    for (int i = 0; i < taille; i++)
    {
        tab[i] = rand() % 2 ;
    }
}