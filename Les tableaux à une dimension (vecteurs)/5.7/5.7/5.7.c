#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

/*
5.7 Les fonctions rand() et srand()
Écrire un programme de jeu qui permettra à l’utilisateur de trouver un nombre choisi par
l’ordinateur. L’ordinateur choisit un nombre au hasard en utilisant la fonction rand().
L’utilisateur dispose d’un nombre limité d’essais pour trouver ce nombre et, à chaque
essai, l’ordinateur affichera soit « nombre trop petit », soit « nombre trop grand ». Le jeu se
termine dès que le nombre a été trouvé ou si le nombre limite d’essais est atteint. On affichera
un message explicite selon l’issue du jeu
*/

int main(void)
{
    srand(time(NULL));
    int i = 0;
    int nbUser = 0;
    int nbAlea = rand() % 100 + 1;

    printf("\n%d\n", nbAlea);

    printf("Jeu Plus Petit ou Plus Grand\n");
    printf("\nVous devez trouver un nombre de 1 a 100 en 10 coups maximum\n\n");

    while (nbUser != nbAlea && i < 10)
    {
        printf("Votre nombre : ");
        scanf("%d", &nbUser);
        if (nbUser < nbAlea)
        {
            printf("\nC'est plus grand !\n");
            i++;
        }
        else
        {
            if (nbUser > nbAlea)
            {
                printf("\nC'est plus petit !\n");
                i++;
            }
            else
            {
                printf("\nBravo, vous avez trouve en %d coup(s) !\n", i + 1);
            }
        }
    }
    if (nbUser != nbAlea)
    {
        printf("\nPerdu, vous ferez mieux la prochaine fois !\n");
    }

    return 0;
}