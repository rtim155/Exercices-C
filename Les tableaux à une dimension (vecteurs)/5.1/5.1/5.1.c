#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

/*
5.1
Écrire un programme calculant la somme ou le produit (l’utilisateur pourra choisir
l’opération) des éléments entiers d’un vecteur v[50]. Le nombre d’éléments lus et les éléments
eux-mêmes sont choisis par l’utilisateur. On affichera le vecteur une fois les éléments entrés
ainsi que le résultat de l’opération choisie.
*/

int main(void)
{
    int choixUser = 0;
    int nbElem = 0;
    long long produit = 1;
    int somme = 0;
    int tab[50] = { 0 };
    
    srand(time(NULL));

    do
    {
        printf("Choisissez une operation\n");
        printf("\n1. ADDITION\n");
        printf("\n2. MULTIPLICATION\n");
        printf("\nVotre choix : ");
        scanf("%d", &choixUser);
    } while (choixUser < 1 || choixUser > 2);

    do
    {
        printf("\nEntrez le nombre d'elements dans le tableau (1 => 50) : ");
        scanf("%d", &nbElem);
    } while (nbElem < 1 || nbElem > 50);

    for (int i = 0; i < nbElem; i++)
    {
        int nbAlea = rand() % 10 + 1; //Génère de nombres aléatoires pour remplir le tableau

        tab[i] = nbAlea;

        if (choixUser == 1)
        {
            somme += tab[i];
        }
        else
        {
            produit *= tab[i];
        }
    }
    printf("\n\n");

    for (int i = 0; i < nbElem; i++)
    {
        printf("\nTab[%d] = %d\n", i, tab[i]);
    }
    if (choixUser == 1)
    {
        printf("\nSOMME = %d\n", somme);
    }
    else
    {
        printf("\PRODUIT = %lld\n", produit);

    }
    

    return 0;
}