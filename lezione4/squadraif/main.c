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
    printf("Che numero hai scelto?\n");
    scanf("%d", &sceltaUtenteMaglietta);

    // Stampo quello che l'utente mi ha detto
    printf("L'utente vuole sapere il nome del giocatore con la maglietta numero %d\n", sceltaUtenteMaglietta);


    // Controllo numero maglietta e stampo il nome
    if (sceltaUtenteMaglietta == OSPINA)
    {
        printf("Il giocatore e' Ospina\n");
    } else if (sceltaUtenteMaglietta == DILORENZO)
    {
        printf("Il giocatore e' Di Lorenzo");

    } else if (sceltaUtenteMaglietta == MERTENS)
    {
        printf("Il giocatore e' Mertens");
    } else if (sceltaUtenteMaglietta == MARIO_RUI)
    {
        printf("Il giocatore e' Mario Rui");
    } else if (sceltaUtenteMaglietta == OSIMHEN)
    {
        printf("Il giocatore e' Oshimen");
    } else
    {
        printf("Non conosco questo giocatore\n");
    }
    return 0;
}
