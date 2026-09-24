// contiene i prototipi delle funzioni descritte in "doc.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "doc.h"

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

void print_matrix(int rows, int cols, int matrix[rows][cols]){

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){    
           printf("%3d ", matrix[i][j]);  
        }
        printf("\n");
    }
}

