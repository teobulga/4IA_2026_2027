#include <stdio.h>
#include "struct.c"

#define DIM 5


int main(void){

    shape forma;
    shape vectorShape[DIM];

    /*
        input_shape(&forma);
        print_shape(forma);
    */


    for(int i=0; i<DIM; i++){
        input_shape(&vectorShape[i]);
    }

    for(int i=0; i<DIM; i++){
        print_shape(vectorShape[i]);
    }
    return 0;
}