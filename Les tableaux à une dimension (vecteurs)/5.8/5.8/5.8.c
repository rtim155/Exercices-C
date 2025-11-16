#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

/*
5.8 Produit scalaire/produit vectoriel
Écrire un programme qui réalise, au choix de l’utilisateur :
• Soit le produit scalaire de 2 vecteurs v1 et v2 : v1 * v2 = a1*b1+a2*b2+ ...an*bn
• Soit le produit vectoriel v1 x v2= [a1*b1, a2*b2,……]
Les vecteurs seront remplis aléatoirement de nombres entiers compris entre 0 et 10.
(a1,a2,...an sont les composants de v1 et b1,b2,...bn ceux de v2)
*/

int fctScalaire(int* tab1, int* tab2);
void fctVectorielle(int* tab1, int* tab2, int* tab3);

int main(void)
{
    srand(time(NULL));

    int choixUser = 0;
    int tab1[5], tab2[5], tab3[5];

    do
    {
        printf("\n\tChoisissez une methode\n\n");
        printf("\n\t1.Produit scalaire de 2 vecteurs\n");
        printf("\n\t2.Produit vectoriel\n");
        printf("\n\tVotre choix : ");
        scanf("%d", &choixUser);
    } while (choixUser < 1 || choixUser > 2);

    for (int i = 0; i < 5; i++)
    {
        tab1[i] = rand() % 11;
        tab2[i] = rand() % 11;
        printf("\n\tTab1[%d] = %d  Tab2[%d] = %d\n", i, tab1[i], i, tab2[i]);
    }

    switch (choixUser)
    {
        case 1:
            printf("\n\tLa produit de la somme des 2 tableaux est de %d\n", fctScalaire(tab1, tab2));
            break;
        case 2:
            fctVectorielle(tab1, tab2, tab3);
            break;
    }

    return 0;
}

int fctScalaire(int* tab1, int* tab2)
{
    int somme = 0;

    for (int i = 0; i < 5; i++)
    {
        somme += tab1[i] * tab2[i];
    }
    return somme;
}
void fctVectorielle(int* tab1, int* tab2, int* tab3)
{
    for (int i = 0; i < 5; i++)
    {
        tab3[i] = tab1[i] * tab2[i];
        printf("\n\t%d * %d = Tab3[%d] => %d\n", tab1[i], tab2[i], i, tab3[i]);
    }
}