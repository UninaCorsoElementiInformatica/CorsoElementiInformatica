#include <stdio.h>
#include <stdlib.h>

#define NO_ERRORI            0
#define ERR_ALTEZZA         -1
#define ERR_BASE            -2
#define ERR_BASE_ALTEZZA    -3

int main()
{
    //const int ERR_VALORE_NEGATIVO = -1;
    int base = -2;
    int altezza = 3;
    int errore = NO_ERRORI;

    if (altezza <= 0)
    // PARENTESI GRAFFE: INIZIO BLOCCO CODICE
    {
        // ARGOMENTI FUNZIONE: PARENTESI TONDE
        printf("[-] Altezza deve essere maggiore di 0\n");
        errore = ERR_ALTEZZA;
//        return ERR_ALTEZZA;
    }
    if (base <= 0)
    {
        printf("[-] Base deve essere maggiore di 0\n");
        errore = ERR_BASE;
    }

  //      return ERR_BASE;
    if (altezza <= 0 && base <= 0)
    {

        errore = ERR_BASE_ALTEZZA;
    }
    if (errore == NO_ERRORI)
    {
        int area = base  * altezza;

        printf("Area vale: %d!\n", area);
        return NO_ERRORI;
    }
    else
    {
        return errore;
    }


}
