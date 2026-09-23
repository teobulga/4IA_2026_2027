#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "array_lib.h"



void random_fill_array(int v[], int dim, int rnd_max){
    for(int i=0; i<dim; i++){
        v[i] = 1 + (rand() % rnd_max);
    }
}

void print_vector_line(int v[], int dim){
    for(int i=0; i<dim; i++){
        printf("%d ", v[i]);
    }
}

int vector_max_finder(int v[], int dim){
    int max = 0;
    for(int i=0; i<dim; i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    return max;
}

int vector_equal_number_counter(int v[], int dim, int user_input){
    int equal_number= 0;

        for(int i=0; i<dim; i++){
            if(v[i] == user_input){
                equal_number++;
            }
    }
    return equal_number;

}

int vector_finder_sostituter(int v[], int dim, int target, int substitute){
    int n_sostitution = 0;

    for(int i=0; i<dim; i++){
        if(v[i] == target){
            v[i] = substitute;
            n_sostitution++;
        }
    }
    return n_sostitution;
}