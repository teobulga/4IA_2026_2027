// contiene i prototipi delle funzioni descritte in "doc.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include<stdbool.h>
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

void print_matrix(int rows, int cols, int m[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
        	if (j == 0)
        		printf("[");
            printf("%3d ", m[i][j]);
        	if (j == cols - 1)
        		printf("]");
        }
        printf("\n");
    }
}

void quadratic_matrix_scalare(int input_filler,int rows, int cols, int m[rows][cols]){

    m[rows][cols] = 0;

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                m[i][j] =0 ;
                if(i == j) {
                    m[i][j] = input_filler;
                }

            printf("%3d ", m[i][j]);  
        }
        printf("\n");
    }

}

bool quad_matrix_simmetry()

