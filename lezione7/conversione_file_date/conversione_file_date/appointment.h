#ifndef APPOINTMENT_H_INCLUDED
#define APPOINTMENT_H_INCLUDED
typedef struct {
    short int year;
    unsigned int month;
    unsigned int day;
} DATE;

void print_date(DATE d);


#endif // APPOINTMENT_H_INCLUDED
