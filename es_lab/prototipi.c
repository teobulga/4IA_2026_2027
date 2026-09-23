// contiene i prototipi delle funzioni descritte in "documentazione.h"#include <stdio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "lib.h"

void initArray(int v[], int dim){
    for(int i=0; i<dim; i++ ){
        v[i] = 0;
    }
}

void fill_array(int v[], int dim){
    int user_input = 0;

    for(int i=0; i<dim; i++){
        printf("inserisci un numero per riempire la casella [%d]", i+1);
        scanf("%d", &user_input);
        v[i]= user_input;
    }
}


void random_fill_array(int v[], int dim){
    for(int i=0; i<dim; i++){
        v[i] = 1 + (rand() % 99);
    }
}