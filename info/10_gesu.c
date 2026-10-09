/*
    Realizza una funzione che riceve una matrice e un vettore con numero di celle
    pari al numero di colonne della matrice.

    La funzione restituisce falso/vero verificando se il contenuto del vettore è uguale ad almeno
    una riga della matrice.
*/

// gcc 09_es_gesu.c _teolib.c -o 09_es_gesu && ./09_es_gesu

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "_teolib.h"

bool gesu(int rows, int cols, int m[rows][cols], int v[cols]){

    int diff_cnt =0;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(v[j] != m[i][j]){
                diff_cnt ++;
            }
        }
    }
    if (diff_cnt < rows){
        return false;
    }else{
        return true;
    }
} 

// implementa main 

int main(void){


    return 0;
}