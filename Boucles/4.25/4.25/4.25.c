#include <stdio.h>
#include <math.h>
#include <Windows.h>
#pragma warning (disable:4996)
#pragma warning(disable:6031)

/*
4.25 Dessin d'une forme géométrique
a. Écrire un programme qui permet facilement d’afficher à l’écran un rectangle comme le
suivant. Chaque appel à la fonction printf n'affichera qu'un seul caractère. On pourra
prévoir une seconde version de l'exercice dans lequel la fonction printf peut afficher
plusieurs caractères.
Exemple : 18 sur 5 :
+----------------+
|                |
|                |
|                |
+----------------+
La largeur et la longueur de ce rectangle seront saisies au clavier.
On affichera un seul caractère à la fois.
b. Même chose pour le triangle isocèle dont on demandera la hauteur : Ex : hauteur 6 :
      /\
     /  \
    /    \
   /      \
  /        \
 /__________\
c. Idem pour le losange dont on demandera la longueur du côté : Ex : côté 5 :
      /\
     /  \
    /    \
   /      \
  /        \
  \        /
   \      /
    \    /
     \  /
      \/
d. Idem pour le parallélogramme dont on demandera la longueur de la base et la hauteur :
Ex : base = 15; hauteur 3 :
    ---------------
   /              /
  /              /
 /              /
 ---------------
e. Idem pour le trapèze rectangle dont on demandera la longueur de la grande base, celle de
la petite base. La hauteur sera calculée et sera égale à la différence entre la grande et la
petite base plus 1 : Ex : petite base 8, grande base : 14 => hauteur = 7
 +------+
 |       \
 |        \
 |         \
 |          \
 |           \
 +------------+
*/

void dessinerRectangle(int longueur, int largeur);
void dessinerTriangle(int hauteur);
void dessinerLosange(int hauteur);
void dessinerParallelogramme(int longueur, int hauteur);
void dessinerTrapeze(int grandeBase, int petiteBase);

int main()
{
    int largeur = 0;
    int longueur = 0;
    int hauteur = 0;
    int grandeBase = 0, petiteBase = 0;
    int choixUser = 0;

    do
    {
        printf("Choisissez un dessin en entrant le numero correspondant\n");
        printf("1. Rectangle\n");
        printf("2. Triangle\n");
        printf("3. Losange\n");
        printf("4. Parallelogramme\n");
        printf("5. Trapeze rectangle\n\n");
        printf("Votre choix : ");
        scanf("%d", &choixUser);
    } while (choixUser < 1 || choixUser > 5);

    switch (choixUser)
    {
    case 1:
        printf("\nEntrez la longueur : ");
        scanf("%d", &longueur);
        printf("\nEntrez la largeur : ");
        scanf("%d", &largeur);
        dessinerRectangle(longueur, largeur);
        break;
    case 2:
        printf("\nEntrez la hauteur : ");
        scanf("%d", &hauteur);
        dessinerTriangle(hauteur);
        break;
    case 3:
        printf("\nEntrez la longueur d'un cote : ");
        scanf("%d", &longueur);
        hauteur = longueur * 2;
        dessinerLosange(hauteur);
        break;
    case 4:
        printf("\nEntrez la longueur de la base : ");
        scanf("%d", &longueur);
        printf("\nEntrez la hauteur : ");
        scanf("%d", &hauteur);
        hauteur += 2;
        dessinerParallelogramme(longueur, hauteur);
        break;
    case 5:
        printf("\nEntrez la longueur de la grande base : ");
        scanf("%d", &grandeBase);
        printf("\nEntrez la longueur de la petite base : ");
        scanf("%d", &petiteBase);
        dessinerTrapeze(grandeBase, petiteBase);
        break;
    }


    return 0;
}

void dessinerRectangle(int longueur, int largeur)
{
    printf("\n\n");

    for (int i = 1; i <= largeur; i++)
    {
        printf("\n\t");

        for (int j = 1; j <= longueur; j++)
        {
            if (i == 1 || i == largeur)
            {
                if (j == 1 || j == longueur)
                {
                    printf("+");
                }
                else
                {
                    printf("-");
                }
            }
            else
            {
                if (j == 1 || j == longueur)
                {
                    printf("|");
                }
                else
                {
                    printf(" ");
                }
            }
            Sleep(30);
        }
    }
    printf("\n\n");
}

void dessinerTriangle(int hauteur)
{
    printf("\n\n");

    for (int i = 1; i <= hauteur; i++)
    {
        printf("\n\t");

        for (int j = 0; j <= hauteur * 2; j++)
        {
            if (j == hauteur - i)
            {
                printf("/");
            }
            else
            {
                if (j == hauteur + i)
                {
                    printf("\\");
                }
                else
                {
                    if (i == hauteur)
                    {
                        printf("-");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
        Sleep(30);
    }
    printf("\n\n");
}
void dessinerLosange(int hauteur)
{
    printf("\n\n");

    for (int i = 1; i <= hauteur; i++)
    {
        printf("\n\t");

        int k = i;
        if (i > hauteur / 2)
        {
            k = hauteur - i + 1;
        }

        for (int j = 1; j <= hauteur; j++)
        {
            if (i <= hauteur / 2)
            {
                if (j == hauteur / 2 - k + 1)
                {
                    printf("/");
                }
                else
                {
                    if (j == hauteur / 2 + k)
                    {
                        printf("\\");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
            else
            {
                if (j == hauteur / 2 - k + 1)
                {
                    printf("\\");
                }
                else
                {
                    if (j == hauteur / 2 + k)
                    {
                        printf("/");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
        Sleep(30);
    }
    printf("\n\n");
}
void dessinerParallelogramme(int longueur, int hauteur)
{
    printf("\n\n");

    for (int i = 1; i <= hauteur; i++)
    {
        printf("\n\t");

        for (int j = 1; j <= hauteur - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= longueur; k++)
        {
            if (i == 1 || i == hauteur)
            {
                printf("-");
            }
            else if (k == 1 || k == longueur)
            {
                printf("/");
            }
            else
            {
                printf(" ");
            }

        }
        Sleep(30);
    }
    printf("\n\n");
}
void dessinerTrapeze(int grandeBase, int petiteBase)
{
    int hauteur = grandeBase - petiteBase + 1;

    printf("\n\n");

    for (int i = 0; i <= hauteur; i++)
    {
        printf("\n\t");

        for (int j = 0; j <= grandeBase; j++)
        {
            if (i == 0 || i == hauteur)
            {
                if (j == 0 || (i == hauteur && j == grandeBase) || (i < hauteur && j == petiteBase + i - 1))
                {
                    printf("+");
                }
                else
                {
                    if (j >= petiteBase + i)
                    {
                        printf(" ");
                    }
                    else
                    {
                        printf("-");
                    }
                }
            }
            else
            {
                if (j == 0)
                {
                    printf("|");
                }
                else
                {
                    if (j < petiteBase + i - 1)
                    {
                        printf(" ");
                    }
                    else
                    {
                        if (j == petiteBase + i - 1)
                        {
                            printf("\\");
                        }
                    }
                }
            }
        }
        Sleep(30);
    }
    printf("\n\n");
}