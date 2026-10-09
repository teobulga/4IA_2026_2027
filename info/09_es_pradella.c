/* provare a creare le funzioni per le seguenti richieste:
1. Calcolo del valor medio della matrice.
2. Stampa della matrice con somma totale di ogni singola riga.
3. Somma totale del triangolo inferiore e del triangolo superiore.
*/

// gcc 09_es_pradella.c _teolib.c -o 09_es_pradella && ./09_es_pradella

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "_teolib.h"

// f1
float tl_mat_media(int rows, int cols, int m[rows][cols]){
    int sum = 0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            sum += m[i][j];
        }
    }
    return (sum/(rows*cols));
}

//f2
void tl_mat_sum_rows(int rows, int cols, int m[rows][cols]){
    int sum_righe;
    for(int i=0; i<rows; i++){
        sum_righe = 0;
        for(int j=0; j<cols; j++){
           printf("%3d", m[i][j]);
           sum_righe += m[i][j];
        }
        printf("  -> %3d", sum_righe);
        printf("\n");
    }

}
//f3
void tl_mat_trian_up_down_sum(int rows, int cols, int m[rows][cols]){
    int somma_down_t = 0;
    int somma_up_t =0;
    int somma_diag_t =0;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){

            if(j>i){ // top half
                somma_up_t += m[i][j];
            }

            if(i>j){ // bottom half
                somma_down_t += m[i][j];
            }

            if(j==i){ // diagonal
                somma_diag_t += m[i][j];
            }
        }
    }
    printf("somma triangolo superiore : %d\nsomma triangolo inferiore : %d\nsomma diagonale : %d\n", somma_up_t, somma_down_t,somma_diag_t );
}




int main(void){

    int dim = 5;
    int m[dim][dim];

    int rnd_min= 0;
    int rnd_max= 10;

    printf("---------TEST PRIMA FUNZIONE !!!!!!!!!!--------- \n");

    tl_mat_fill_rnd(dim,m,rnd_min,rnd_max);
    printf("\n");
    tl_mat_print(dim,dim,m);
    printf("\n");
    printf("media :");
    printf("%f", tl_mat_media(dim,dim,m));
    printf("\n");
    printf("\n");

    printf("--------TEST SECONDA FUNZIONE !!!!!!!!!! ---------\n");
    printf("\n");

    tl_mat_sum_rows(dim,dim,m);
    printf("\n");

    printf("--------TEST TERZA FUNZIONE !!!!!!!!!! ---------\n");
    printf("\n");

    tl_mat_trian_up_down_sum(dim,dim,m);


    return 0;
}


