#include <stdio.h>
#include <stdlib.h>

#define ALTEZZA_VERA_CIRO 186
#define HA_OCCHI_NERI 1


// Questo e' un commento singola linea


int main()
{

	int altezzaCiroInCentimetri;
	int rispostaOcchiCiro;
	// Prendo le informazioni dall' utente
    printf("Quanto e' alto Ciro?\n");
	scanf("%d", &altezzaCiroInCentimetri);

	printf("Ha gli occhi neri?\n");
	scanf("%d", &rispostaOcchiCiro);

	printf("L'utente pensa che Ciro sia alto %d\n", altezzaCiroInCentimetri);
	// Stampo le informazioni prese dall'utente
	if (rispostaOcchiCiro == 1)
    {
        printf("L'utenze pensa che Ciro abbia gli occhi neri\n");
    }
    else
    {
        printf("L'utente pensa che Ciro NON abbia gli occhi neri\n");
    }

    // Verifico se le informazioni sono corrette
    if (altezzaCiroInCentimetri == ALTEZZA_VERA_CIRO && rispostaOcchiCiro == HA_OCCHI_NERI)
    {
        printf("Conosci bene Ciro\n");
    }
    else
    {
        printf("Devi conoscere meglio Ciro");
    }




    return 0;
}
