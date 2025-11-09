#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

/*
4.29
Écrire un programme qui …
• Génère un nombre entier compris entre 1 et 1000;
• Offre à l’utilisateur 10 essais pour trouver ce nombre. Les indications « c’est plus »
ou « c’est moins » sont fournies à l’utilisateur pour toute tentative infructueuse;
• NB : Les tentatives qui sont hors de l'intervalle [1-1000] ne sont pas prises en
compte (on garde le même nombre d'essais);
• NB : Entrer 0 est synonyme d'abandon de la partie.
*/

int main(void)
{
    srand(time(NULL));

    int i = 0;
    int nbUser = 1;
    int nbAlea = rand() % 1000 + 1;

    printf("\t\tJeu du + ou -\n");
    printf("\nUn nombre vient d etre genere aleatoirement, trouvez le !\n");
    printf("\nVous avez 10 essais. Pas de nombre negatif. 0 pour quitter\n");

    while (i < 10 && nbUser != 0 && nbAlea != nbUser) 
    {
        printf("\nEntrez un nombre : ");
        scanf("%d", &nbUser);

        if (nbUser < 0)
        {
            printf("\nLe nombre doit etre positif\n");
        }
        else if (nbUser > 1000)
        {
            printf("\nLe nombre doit etre plus petit que 1000\n");
        }
        else if (nbUser == 0)
        {
            return 0;
        }
        else if (nbUser > nbAlea)
        {
            printf("\nC'est plus petit !\n"); 
            i++;
            printf("\nIl vous reste %d essai(s) !\n", 10 - i);
            
        }
        else if (nbUser < nbAlea)
        {
            printf("\nC'est plus grand !");  
            i++;
            printf("\nIl vous reste %d essai(s) !\n", 10 - i);
            
        }
        else
        {
            i++;
            printf("\nGagne !!!\n");
            printf("\nNombre trouve en %d essai(s) !\n", i);
        }
    }
    if (i == 10 && nbAlea != nbUser)
    {
        printf("\nFini. Le nombre a trouver etait %d\n", nbAlea);
    }
    printf("\nFERMETURE\n");
      
    return 0;
}
