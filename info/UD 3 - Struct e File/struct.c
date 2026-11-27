#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "struct.h"


void input_shape(shape* x){
    int base;
    int altezza;

    printf("inserisci la base: ");
    scanf("%d", &base);

    printf("inserisci l altezza: ");
    scanf("%d", &altezza);

    (*x).b = base;
    (*x).h = altezza;

}
void print_shape(shape x){
    printf("base : %d, altezza : %d\n",x.b, x.h);
}
