#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "lib_verifica.c"

#define DIM 5


int main(void){

    srand(time(NULL));
    int v[DIM];
    int mat[DIM][DIM];


    int rnd_max = 5;
    int rnd_min = 1;
// a

    printf("----A & B----\n");

    tl_array_fill_rnd_range(v, DIM, rnd_min, rnd_max);
    tl_mat_fill_rnd(DIM, mat, rnd_min, rnd_max);


// b
    printf("matrice: \n");
    tl_mat_print(DIM, DIM, mat);
    printf("\n");
    printf("vettore : ");
    tl_array_print(v, DIM);
    printf("\n");

    printf("----C----\n");


// c

  

    for(int i=0; i<DIM; i++){
        int cnt_mat_eq_vet = 0;
        for(int j=0; j<DIM; j++){
            if(mat[i][j] == v[i]){
                cnt_mat_eq_vet++;
                printf("valori di V presenti alla righa %d della matrice = %d\n", i, cnt_mat_eq_vet);
            }
        }
    }

    printf("\n");



    printf("----D----\n");



// d

    int tmp = mat_sum_line_grt_vect(DIM, DIM, DIM, mat, v);
    printf("numero di righe della mat con somma superiore al vettore : %d ", tmp);
    printf("\n\n");

    printf("----E----\n");

// e

    printf("i numeri contenuti nel vettore appaiono alla coordinate :\n");
    for(int i=0; i<DIM; i++){
        for(int j=0; j<DIM; j++){
            if(mat[i][j] == v[i]){
                printf("(%d,%d) ", i, j);
            }
        }
    }
    printf("\n\n");






    return 0;
}