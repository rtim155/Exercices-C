#include <stdio.h> 
#include <math.h> 
#include <Windows.h> 
#pragma warning (disable:4996) 
#pragma warning(disable:6031)

/*
* 4.26 Approximation de la racine carrée
Demander une valeur numérique (qui peut être réelle). On va calculer la partie entière
de la racine carrée de ce nombre en utilisant l'algorithme suivant.
Additionner les nombres impairs jusqu'à ce que leur somme soit strictement supérieure
à la valeur de départ. La partie entière de la racine carrée de ce nombre est égal au nombre de
valeurs impaires que l'on a additionnées -1.
Ex : 70 : 1 + 3 + 5 + 7 + 9 + 11 + 13 + 15 + 17 > 70 => 8
Ex : 36 : 1 + 3 + 5 + 7 + 9 + 11 + 13 > 36 => 6 (de 1 à 11 = 36, mais pas > 36 !)
Ex : 81 : 1 + 3 + 5 + 7 + 9 + 11 + 13 + 15 + 17 + 19 > 81 => 9
*/

int main()
{
	double nbUser = 0; 
	int somme = 0;
	int count = 0;
	int i = 1;

	printf("Entrez un nombre pour trouver sa racine : ");
	scanf("%lf", &nbUser);

	while (somme <= nbUser)
	{
		somme += i;
		i += 2;
		count += 1; 
	}
	
	count -= 1;

	printf("\n%d\n", count);

	return 0;
}