#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

/*
4.28
Une grande partie du travail de l'administration de l'université, en plus de gérer les
enseignants, les étudiants, les cours… est de veiller au bon fonctionnement de l'université et
en particulier à ce que les comptes soient bien tenus. En particulier il faut, une fois par an,
faire un bilan annuel des dépenses.
Toutes les dépenses de l'année ont été enregistrées et classées dans une multitude de
dossiers et il faut maintenant calculer la somme de toutes ces dépenses. Mais personne ne sait
exactement combien de dépenses différentes ont été effectuées durant l'année écoulée !
Votre programme devra lire une suite d'entiers positifs et afficher leur somme. On ne sait
pas combien il y aura d'entiers, mais la suite se termine toujours par la valeur -1 (qui n'est pas
une dépense, juste un marqueur de fin).
Attention, toutes le dépenses négatives ou >= 10000 donnent lieu à un affichage
"Depense non prise en compte !" et celles-ci ne sont pas prises en compte.
Vous devez impérativement découper votre programme en utilisant une fonction qui
effectue le contrôle de la dépense. Aucun printf ou scanf n'est permis dans cette fonction.
*/

int controleDepense(int depense);

int main(void)
{
    int depense = 0;
    int somme = 0;
    int retourDepense = 1;

    while (retourDepense != -1)
    {
        printf("\nEntrez une facture, uniquement positive a comptabiliser. Faites -1 pour quitter : ");
        scanf("%d", &depense);

        retourDepense = controleDepense(depense);

        if (retourDepense == 1)
        {
            somme += depense;
        }
        else
        {
            if (retourDepense == 0)
            {
                printf("\nDepense non prise en compte\n");
            }
        } 
        printf("\nSomme actuelle : %d\n", somme);
    }   
    return 0;   
}
int controleDepense(int depense)
{
    if (depense == -1)
    {
        return -1;
    }
    else if (depense < 0 || depense >= 10000)
    {
        return 0;
    }
    else
    {
        return 1;
    }  
}