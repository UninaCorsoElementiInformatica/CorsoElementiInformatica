#include <stdio.h>
#include <stdlib.h>
// In questo esercizio si cerca di calcolare la somma di 5 numeri
int main()
{
    int i = 0;
    const int NUMERO_CIFRE = 5;
    int somma = 0, numero = 0;

    for (i = 0; i < NUMERO_CIFRE; i++) // i++ significa i = i +1
    {
        // Prendi il numero dall'utente
        printf("Prendi il numero %d\n", i+1);
        scanf("%d", &numero);


        // somma = somma + numero;
        // Si può anche scrivere così:
        somma += numero;
        printf("La somma adesso e' %d\n", somma);
    }

    printf("Ho eseguito %d iterazioni.\n", NUMERO_CIFRE);
    printf("La somma dei %d numeri e' uguale a %d\n", NUMERO_CIFRE, somma);


    return 0;
}
