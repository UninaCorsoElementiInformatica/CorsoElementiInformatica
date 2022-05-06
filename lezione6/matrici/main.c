#include <stdio.h>
#include <stdlib.h>


int main()
{

    const int DIM_RIGA = 3;
    const int DIM_COL = 2;
    int vettore[3];
    int matrice[DIM_RIGA][DIM_COL];
    int i, j;
    // Acquisizione valori
    for (i = 0; i < DIM_RIGA; i++)
        for(j = 0; j < DIM_COL; j++)
        {
            printf("Inserisci riga %d colonna %d\n", i+1, j+1);
            scanf("%d", &matrice[i][j]);

        }

    // Stampa valori
    for (i = 0; i < DIM_RIGA; i++)
    {
        for(j = 0; j < DIM_COL; j++)
        {
           printf("%d\t", matrice[i][j]);
        }
        printf("\n");
    }



    return 0;
}
