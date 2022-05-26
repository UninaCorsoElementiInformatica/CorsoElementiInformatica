#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 80

void tmp(int argc, int* argv)
{
        char *path;
    char line[MAX_LINE_LENGTH] = {0};
    unsigned int line_count = 0;

    if (argc < 1)
        return EXIT_FAILURE;
    //printf("Inserisci nome file:\n");
    //scanf("%s", path);
    //printf("%s", path);
   // printf("Stringa:%s\n", path);
    path = argv[1];
    printf("Argomento inviato: %s", path);

    /* Open file */
    FILE *file = fopen(path, "r");

    if (!file)
    {
        perror(path);
        return EXIT_FAILURE;
    }

    /* Get each line until there are none left */
    while (fgets(line, MAX_LINE_LENGTH, file))
    {
        /* Print each line */
        printf("line[%06d]: %s", ++line_count, line);

        /* Add a trailing newline to lines that don't already have one */
        if (line[strlen(line) - 1] != '\n')
            printf("\n");
    }

    /* Close file */
    if (fclose(file))
    {
        return EXIT_FAILURE;
        perror(path);
    }
}

typedef struct {
    int year;
    int month;
    int day;
} DATE;

DATE parse_string(char* s)
{
    const char* SEP = "/";
    char *token = strtok(s, SEP);
    char *month = strtok(NULL, SEP);
    char *year = strtok(NULL, SEP);
    int year_num = atoi(year);
    int month_num = atoi(month);
    int day_num = atoi(token);

    DATE data = {year_num, month_num, day_num};
    return data;
}

void print_date(DATE d)
{
    printf("%d/%d/%d\n", d.day, d.month, d.year);
}
int main(int argc, char **argv)
{
   char string[50] = "12/11/2021";
   // Extract the first token
    DATE appointment_date = parse_string(string);
    print_date(appointment_date);

   return 0;
}
