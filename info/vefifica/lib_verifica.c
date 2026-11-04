#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "lib_verifica.h"




void tl_mat_fill_rnd(int dim, int m[dim][dim], int rnd_min, int rnd_max) {
    int range = rnd_max - rnd_min + 1 ;

    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            m[i][j] = rnd_min + (rand() % range);
        }
    }
}


void tl_array_fill_rnd_range(int v[], int dim, int min, int max) {
    int range = max - min + 1 ;

    for (int i = 0; i < dim; i++) {
        v[i] = min + (rand() % range);
    }
}


void tl_array_print(int v[], int dim) {
    for (int i = 0; i < dim; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void tl_mat_print(int rows, int cols, int m[rows][cols]) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j == 0) printf("[");

            printf("%3d ", m[i][j]);

            if (j == cols - 1) printf("]");
        }

        printf("\n");
    }
}

// ritorna quante righe della mat hanno somma superiore alla somma del vett

int mat_sum_line_grt_vect(int r, int c, int dim, int m[r][c], int v[]){

    int vet_sum =0;
    for(int i=0; i<dim; i++){
        vet_sum += v[i];
    }

    int cnt_mat_line_grt = 0;

    for(int j=0; j<r; j++){

        int mat_line_sum =0;

        for(int k=0; k<c; k++){
            mat_line_sum += m[j][k];
        }

        if(mat_line_sum > vet_sum){
            cnt_mat_line_grt++;
        }


    }

    return cnt_mat_line_grt;

}

