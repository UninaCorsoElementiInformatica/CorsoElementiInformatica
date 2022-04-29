#include <stdio.h>
#include <stdlib.h>

#define ALTEZZA_VERA_CIRO 186

int main()
{

	int altezzaCiroInCentimetri;
    printf("Quanto e' alto Ciro?\n");
	scanf("%d", &altezzaCiroInCentimetri);
	// == -> VUOL DIRE UGUAGLIANZA
	// != .> VUOL DIRE DISUGUAGLIANZA
	if (altezzaCiroInCentimetri != ALTEZZA_VERA_CIRO)
    {

        printf("Hai indovinato altezza");
    }
    else
    {
        printf("Hai sbagliato, riprova");
    }
    return 0;
}
