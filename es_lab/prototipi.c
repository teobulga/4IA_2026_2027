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

// funzioni esclusive per matrici quadrate 

void quadratic_matrix_scalare(int input_filler, int dim, int m[dim][dim]) {
    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            if(i == j) {
                m[i][j] = input_filler; // Diagonale 
            } else {
                m[i][j] = 0; // Altri elementi
            }
        }
    }
}

bool quad_matrix_symmetry(int lato_m, int m[lato_m][lato_m]) {
    for (int i = 0; i < lato_m; i++) {
        for (int j = i + 1; j < lato_m; j++) { // +1 per saltare il caso 0 0
            if (m[i][j] != m[j][i]) {
                return false; // fail fast
            }
        }
    }
    return true; 
}

 void carica_vettor_rnd_range(int v[], int dim, int min, int max){
    srand(time(NULL));
    for(int i=0; i<dim; i++){
        v[i] = min + (rand() % (max - min +1));
    }
 }


 void print_vector(int v[], int dim){
        for(int i=0; i<dim; i++){
            printf("%d ", v[i]);
    }
 }

 float media_vector(int v[], int dim){
    int sum = 0;
    for(int i=0; i<dim; i++){
        sum += v[i];
    }
    return (sum/dim);
 }


