#include <stdio.h>
#include <stdlib.h>

#include "funzioni.h"
#define DIM 3

int main()
{
    int somma = 0;
    /*
    array = |_int_|_int_|_int_|
    */
    int array[DIM];
    /*
    array = |2|_int_|_int_|
    */
    array[0] = 2;
    /*
    array = |2|3|_int_|
    */
    array[1] = 3;
      /*
    array = |2|3|5|
    */
    array[2] = 5;

    somma = array[0] + array[1] + array[2];
    printf("La somma vale: %d\n", somma);

    // In alternativa, posso usare i cicli for
    somma = 0;
    for (int i = 0; i < DIM; i++)
    {
        somma += array[i];
    }
    printf("La somma vale: %d", somma);




    return 0;
}
