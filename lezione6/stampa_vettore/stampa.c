#include <stdio.h>
#include <stdlib.h>

void stampa_array(int* vettore, int dimensione)
{
    int i = 0;
    for (i = 0; i < dimensione; i++)
    {
        printf("%d", vettore[i]);
    }
}


void test_include()
{
    printf("Questo e' un esempio di include");
}
