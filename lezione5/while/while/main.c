#include <stdio.h>
#include <stdlib.h>

//#define ALTEZZA_VERA_CIRO_METRI 1.86


int main()
{

    const float ALTEZZA_VERA_CIRO_METRI = 1.86;
    float altezzaSceltaDaUtente = 0;

    printf("L'altezza vera in metri e' %f\n", ALTEZZA_VERA_CIRO_METRI);

    do
    {
        printf("Che altezza pensi abbia?\n");
        scanf("%f", &altezzaSceltaDaUtente);

        printf("L'utente ha scelto %f\n", altezzaSceltaDaUtente);

        // == -> VUOL DIRE UGUAGLIANZA
        // != .> VUOL DIRE DISUGUAGLIANZA
        if (altezzaSceltaDaUtente == ALTEZZA_VERA_CIRO_METRI)
        {

            printf("Hai indovinato altezza\n");
        }
        else
        {
            printf("Hai sbagliato, riprova\n");
        }

    } while(altezzaSceltaDaUtente != ALTEZZA_VERA_CIRO_METRI);


    return 0;
}
