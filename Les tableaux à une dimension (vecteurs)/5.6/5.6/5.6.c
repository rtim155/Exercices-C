#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

/*
5.6
Saisir les éléments d’un vecteur de nombres réels de taille n, n est choisi par l’utilisateur.
Ecrire un programme qui demande à l’utilisateur de saisir un nombre et vérifie si ce dernier
(=cible) se trouve dans le vecteur.
Si le nombre est présent dans le vecteur, le programme affichera « nombre trouvé » ainsi
que la position de sa 1ère occurrence dans le vecteur, « non trouvé » sinon.
Programmer les 4 algorithmes de recherche vus en classe (faire un switch-case pour le
choix de la méthode).
*/

int main(void)
{
    srand(time(NULL));

    
    int nbTab = 0;
    int choixUser = 0;
    int pasTrouve = 1;
    int i = 0;
    double nbCible = 0;
    double tab[100] = { 0 };
    
    do
    {
        printf("Entrez le nombre d'elements du tableau (1 a 10) : ");
        scanf("%d", &nbTab);      
    } while (nbTab < 1 || nbTab > 10);
    do
    {
        printf("\nEntrez une methode pour trouver le chiffre cible\n");
        printf("\n1. Classique\n");
        printf("\n2. Booleen\n");
        printf("\n3. Par forcage de boucle\n");
        printf("\n4. Par sentinelle\n");
        printf("\nVotre choix : ");
        scanf("%d", &choixUser);
    } while (choixUser < 1 || choixUser > 4);
    do
    {
        printf("\nEntrez un nombre cible (0 a 10) : ");
        scanf("%lf", &nbCible);        
    } while (nbCible < 0 || nbCible > 10);

    for (int i = 0; i < nbTab; i++)
    {
        tab[i] = rand() % 11;
        printf("\ntab[%d] = %lf\n", i, tab[i]);
    }
    switch (choixUser)
    {
    case 1:
        i = 0;
        while (tab[i] != nbCible && i < nbTab)
        {
            i++;
        }
        if (i == nbTab)
        {
            printf("\nLe nombre n'a pas ete trouve !\n");
        }
        else
        {
            printf("\nNombre trouve a l'indice %d\n", i);
        }
        break;
    case 2:
        i = 0;
        while (pasTrouve != 0 && i < nbTab)
        {
            if (tab[i] == nbCible)
            {
                pasTrouve = 0;
            }
            else
            {
                i++;
            }
        }
        if (pasTrouve == 1)
        {
            printf("\nLe nombre n'a pas ete trouve !\n");
        }
        else
        {
            printf("\nNombre trouve a l'indice %d\n", i);
        }
        break;
    case 3:
        i = 0;
        int pos = -1;
        while (i < nbTab)
        {
            if (tab[i] == nbCible)
            {
                pos = i;
                i = nbTab + 50; 
            }
            else
            {
                i++;
            }
        }
        if (pos == -1)
        {
            printf("\nLe nombre n'a pas ete trouve !\n");
        }
        else
        {
            printf("\nNombre trouve a l'indice %d\n", pos);
        }
        break;
    case 4:
        tab[nbTab - 1] = nbCible;
        i = 0; 
        while (tab[i] != nbCible)
        {
            i++;            
        }
        if (i == nbTab - 1)
        {
            printf("\nLe nombre n'a pas ete trouve !\n");
        }
        else
        {
            printf("\nNombre trouve a l'indice %d\n", i);
        }
        break;
    }

    return 0;
}