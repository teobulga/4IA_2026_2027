#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "doc.h"
#include "prototipi.c"

// programma che stampa il contenuto di una matrice

#define DIM 3

int main(void){

    int matrice[DIM][DIM] = { // braket init
        {0,1,2}, // r0 c0,1,2
        {10,11,12},
        {20,21,22},
    };
    printf("42 \n\n");
    print_matrix(DIM,DIM,matrice);


    return 0;
}