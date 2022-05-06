#include <stdio.h>
#include <stdlib.h>



int main()
{
    int DIM =3;
    int max;
    int min;
    int somma=0;
    float media=0;
    //printf("inserisci la dimensione dell'array: ");
    //scanf("%d", &DIM);
    int array[] = {3, 5, 6};
    min = array[0];
    max = array[0];

    for(int conta=0; conta<DIM; conta++)
    {

      printf("inserisci  numero: ");
      //scanf("%d", &array[conta]);
      somma=somma+array[conta];
      if(array[conta]<min)
         min=array[conta];
      if(array[conta]>max)
         max = array[conta];
    }
    // Questo è sbagliato, perchè non fa il casting a float.
    //media = somma / DIM;
    media= (float)somma / (float)(DIM);
    printf("somma= %d\n", somma);
    printf("media=  %f\n", media);
    printf("media di Pasquale: %d/%d\n", somma, DIM);
    printf("minimo= %d\n", min);
    printf("massimo= %d\n", max);
    return 0;



}

