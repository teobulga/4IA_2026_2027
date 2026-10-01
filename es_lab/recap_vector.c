#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "prototipi.c"

#define DIM 10

int main(void){

    int eta_alunni[DIM];

    carica_vettor_rnd_range(eta_alunni, DIM, 5, 30);
    print_vector(eta_alunni, DIM);
    printf("\n");


    return 0;
}
