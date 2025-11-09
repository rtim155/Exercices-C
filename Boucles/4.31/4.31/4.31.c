#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

/*
4.31
Coder la fonction is_prime() ci-dessous pour tester si un nombre est premier en
retournant 1 si le nombre en paramètre est premier et 0 sinon.
int is_prime(int n Completer les paramètres) {
Ecrire le code de la fonction
return 0;
}
*/

int is_prime(int n);

int main(void)
{
    int nbUser = 0;

    printf("Entrez un nombre pour verifier si il est premier : ");
    scanf("%d", &nbUser);

    if (is_prime(nbUser))
    {
        printf("\nIl est premier\n");
    }
    else
    {
        printf("\nIl n'est pas premier\n");
    }
    
    return 0;
}

int is_prime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
            return 0;
            }
        }
    }   
    return 1;
}