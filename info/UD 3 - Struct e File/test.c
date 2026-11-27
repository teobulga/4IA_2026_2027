#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define DIM 5



typedef struct test{
    int base;
    int altezza;
}shape;



int main(void){
    shape x;
    shape vectorshape[DIM];         //vettore di 5 elementi di tipo shape
    srand(time(NULL));

    x.altezza = 10;
    x.base = 5;

    if(x.altezza == x.base){
        printf("ho un quadrato !!, la sua area è: %d\n", x.base*x.altezza);
    }else{
        printf("ho un rettangolo !!, la sua area è: %d\n", x.base*x.altezza);
    }

    for(int i=0; i<DIM; i++){
        vectorshape[i].altezza = 1 + rand()%20;
        vectorshape[i].base = 1 + rand()%20;
    }



    for(int i=0; i<DIM; i++){
        if(vectorshape[i].altezza == vectorshape[i].base){
        printf("ho un quadrato !!, la sua area è: %d\n", x.base*x.altezza);
        }else{
        printf("ho un rettangolo !!, la sua area è: %d\n", x.base*x.altezza);
    }

    }








    return 0;
}
