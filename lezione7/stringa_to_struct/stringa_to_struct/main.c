#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Date {
    int year;
    int month;
    int day;
} DATE;

#define MAX 50
DATE parse_date(char* data)
{
    char *separator = "/";

    DATE appointment_date;
    char * day = strtok(data, separator);
    printf("Day: %s\n", day);
    appointment_date.day = (short int)atoi(day);
    char *month = strtok(NULL, separator);
    printf("Month: %s\n", month);

    char *year = strtok(NULL, separator);
    appointment_date.day = (unsigned int)atoi(day);
    appointment_date.month = (unsigned int)atoi(month);
    appointment_date.year = (unsigned int)atoi(year);
    return appointment_date;


}


void print_date(DATE d)
{
    printf("%d/%d/%d\n", d.day, d.month, d.year);
}


int main()
{
    char data[MAX] = "03/04/2021";

   // Estrazione di 3 stringhe a partire da una sola stringa data
  /* char * day = strtok(data, "/");
   char * month = strtok(NULL, "/");
   char * year = strtok(NULL, "/");
   printf("%s/%s/%s\n", day, month, year);
   */
    // Definizione di una variabile di tipo DATE
   DATE d;
   d = parse_date(data);

   // Conversione delle stringhe in interi e valorizzazione della mia variabile di tipo DATE

   print_date(d);


   // loop through the string to extract all other tokens
   /*
   while( token != NULL ) {
      printf( "%s\n", token ); //printing each token
      token = strtok(NULL, "/");
   }
   */


    return 0;
}
