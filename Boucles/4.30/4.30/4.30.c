#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

/*
4.30
Les habitants de « pyramidesville » adorent les constructions en forme de pyramide ; de
nombreux bâtiments officiels ont d'ailleurs cette forme. Pour fêter les 150 ans de la
construction de la ville, le gouverneur a demandé la construction d'une grande et majestueuse
pyramide à l'entrée de la ville. Malheureusement, en ces périodes de rigueur budgétaire, il y a
peu d'argent pour ce projet. Les architectes souhaitent cependant construire la plus grande
pyramide possible étant donné le budget prévu.
Votre programme doit d'abord lire un entier : le nombre maximum de pierres dont pourra
être composée la pyramide. Il devra ensuite calculer et afficher un entier : la hauteur de la plus
grande pyramide qui pourra être construite, ainsi que le nombre de pierres qui sera nécessaire.
La solution doit faire intervenir au moins deux autres fonctions que la fonction main. Ces
fonctions doivent avoir au moins un paramètre et retourner une valeur.
*/
int calculEtage(int nbPierre);
int calculPierre(int nbEtage);
int restePierre(int nbPierre, int nbPierrePrecis);

int main(void)
{
    int nbPierre = 0;
    int nbPierrePrecis = 0;
    int nbEtage = 0;
    int reste = 0;

    printf("Entrez le nombre de pierre dont vous disposez : ");
    scanf("%d", &nbPierre);

    nbEtage = calculEtage(nbPierre);
    nbPierrePrecis = calculPierre(nbEtage);
    reste = restePierre(nbPierre, nbPierrePrecis);

    printf("\nVous avez un total de %d pierre(s)\n", nbPierre);
    printf("\nVous allez pouvoir constuire une pyramide de %d etage(s)\n", nbEtage);
    printf("\nCela vous prendra %d pierre(s)\n", nbPierrePrecis);
    printf("\nIl vous restera %d pierre(s) apres la construction\n\n", reste);

    return 0;
}
int calculEtage(int nbPierre)
{
    int somme = 0;
    int nbEtage = 1; 

    while (somme < nbPierre)
    {
        somme = somme + nbEtage * nbEtage;

        if (somme < nbPierre)
        {
            nbEtage++;
        }
        else if (somme == nbPierre)
        {
            return nbEtage;
        }
        else
        {
            return nbEtage - 1;
        }
    }    
}
/*
VERSION OPTIMISEE
int calculEtage(int nbPierre)

int somme = 0;
int nbEtage = 0;

while (somme += (nbEtage + 1) * (nbEtage + 1) <= nbPierre)
{
    somme += nbEtage * nbEtage;
    nbEtage++;
}
return nbEtage;
*/

int calculPierre(int nbEtage)
{
    int somme = 0;

    for (int i = 1; i <= nbEtage; i++)
    {
        somme += i * i;
    }
    return somme;
}
int restePierre(int nbPierre, int nbPierrePrecis)
{
    return nbPierre - nbPierrePrecis;
}