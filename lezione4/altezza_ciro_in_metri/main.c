#include <stdio.h>
#include <stdlib.h>

//#define ALTEZZA_VERA_CIRO_METRI 1.86


int main()
{

    const float ALTEZZA_VERA_CIRO_METRI = 1.86;
    float altezzaSceltaDaUtente;

    printf("L'altezza vera in metri e' %f\n", ALTEZZA_VERA_CIRO_METRI);
    printf("Che altezza pensi abbia?\n");
    scanf("%f", &altezzaSceltaDaUtente);

    printf("L'utente ha scelto %f\t", altezzaSceltaDaUtente);

	// == -> VUOL DIRE UGUAGLIANZA
	// != .> VUOL DIRE DISUGUAGLIANZA
	if (altezzaSceltaDaUtente == ALTEZZA_VERA_CIRO_METRI)
    {

        printf("Hai indovinato altezza");
    }
    else
    {
        printf("Hai sbagliato, riprova");
    }
    return 0;
}
