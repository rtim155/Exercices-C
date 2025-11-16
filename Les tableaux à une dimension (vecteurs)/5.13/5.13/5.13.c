#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

/*
5.13
Lire n (taille du vecteur) et les n éléments de v[20]. Afficher les n éléments de ce vecteur v.
Calculer et afficher l’écart de chaque élément (= différence de valeur) par rapport à la
moyenne des éléments contenus dans le vecteur.
*/

int main(void)
{
    srand(time(NULL));

    int n = rand() % 10 + 1;
    int tab[20] = { 0 };
    int moyenne = 0;
    int somme = 0; 
    int diff = 0;

    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 20 + 1;
        printf("\n\ttab[%d] = %d\n", i, tab[i]);
        somme += tab[i];
    }
    moyenne = somme / n;
    printf("\n\tLa moyenne = %d\n", moyenne);
    for (int i = 0; i < n; i++)
    {
        diff = tab[i] - moyenne;
        printf("\n\tEcart entre %d et %.0lf = %d\n", tab[i], moyenne, abs(diff));
    }
    return 0;
}

