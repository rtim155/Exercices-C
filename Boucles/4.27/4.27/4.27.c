#include <stdio.h> 
#include <math.h> 
#include <Windows.h> 
#pragma warning (disable:4996) 
#pragma warning(disable:6031)

/*
4.27
Afin de pouvoir mieux combattre les différentes épidémies, parfois très graves, qui se
développent régulièrement dans la région, le département de médecine de l'université a lancé
une grande étude. En particulier, les chercheurs s'intéressent à la vitesse de propagation d'une
épidémie et donc à la vitesse à laquelle des mesures sanitaires doivent être mises en place.
Votre programme doit d'abord lire un nombre entier correspondant à la population totale
de la ville. Sachant qu'une personne était malade au jour 1 et que chaque malade contamine
deux nouvelles personnes le jour suivant (et chacun des jours qui suivent), vous devez calculer
à partir de quel jour toute la population de la ville sera malade.
Vous devrez impérativement programmer une solution qui utilise la fonction suivante,
dont voici le prototype imposé :
int doomsDay(int pop);
// pop : la population de la ville (nombre d'habitants).
 // Retourne le nombre de jours nécéssaires pour que toute la ville soit malade.
Exemple : On a 1 malade le premier jour, donc 2 nouveaux malades le second jour, soit
un total de 3 malades. On a donc 6 nouveaux malades au troisième jour, soit un total de 9
malades. On a donc 18 nouveaux malades au quatrième jour, soit…
*/

int doomsDay(int pop);

int main()
{
	int pop = 0;
	
	printf("Entrez le nombre d'habitants : ");
	scanf("%d", &pop);

	printf("\nDoomsday dans %d jours !!!\n", doomsDay(pop));

	return 0;
}

int doomsDay(int pop)
{
	int somme = 1;
	int nbJour = 1;

	printf("\nJour 1 = 1 infecte\n");

	while (somme < pop)
	{
		somme = somme * 2 + somme;
		nbJour += 1;

		printf("\nJour%d = %d infectes\n",nbJour, somme);		
	}
	return nbJour;
}