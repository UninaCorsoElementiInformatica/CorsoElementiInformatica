#include <stdio.h>
#include <stdlib.h>


#define OSPINA 25
#define DILORENZO 22
#define MERTENS 14
#define MARIO_RUI 6
#define OSIMHEN 9

int main()
{
    // Acquisisco scelta numero maglietta
    int sceltaUtenteMaglietta;
    int errore = 0;
    printf("Che numero hai scelto?\n");
    scanf("%d", &sceltaUtenteMaglietta);

    // Stampo quello che l'utente mi ha detto
    printf("L'utente vuole sapere il nome del giocatore con la maglietta numero %d\n", sceltaUtenteMaglietta);
    // Lo switch introduce tutti i casi
    switch (sceltaUtenteMaglietta)
    {
        case OSPINA:
            printf("Il giocatore e' Ospina\n");
            break;
        case DILORENZO:
            printf("Il giocatore e' Di lorenzo\n");
            break;
        case MERTENS:
            printf("Il giocatore e' Mertens\n");
            break;
        case MARIO_RUI:
            printf("Il giocatore e' Mario Rui\n");
            // Tutta la sequenza finisce con break, e vado a return 0
            break;
        case OSIMHEN:
            printf("Il giocatore Osihmen\n");
            break;
        default:
            printf("Non conosco il giocatore \n");
            break;
    }

    return 0;
}
