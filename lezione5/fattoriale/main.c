#include <stdio.h>
#include <stdlib.h>

int fattoriale(int numero)
{
    if (numero < 0)
    {
       printf("Non posso calcolare un fattoriale di un numero negativo\n");
       return -1;
    }
    else if (numero == 0)
    {
        return 1;

    } else {

        int fattoriale = 1;
        // Qui ho sbagliato ... finchè i è diverso da 1
        //for (int i = numero; i == 1; i--)
        for (int i = numero; i != 1; i--)
       {
           // Qui è sbagliato, devo calcolare il decremento
           //fattoriale = fattoriale * numero;
           fattoriale = fattoriale * i;
       }
        return fattoriale;
    }


}

int main()
{
   int numero;
   printf("Prendi numero\n");
   scanf("%d", &numero);
   int fat = fattoriale(numero);
   if (fat < 0)
   {
       return fat;
   } else {
     printf("Il fattoriale vale %d\n", fat);
   }
   return 0;
}

