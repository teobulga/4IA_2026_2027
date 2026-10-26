#include <stdio.h>
#include <stdbool.h>
#include "_teolib.h"

int main(void){

    int dim = 10;
    int arrey[dim];

    int rnd_max = 50;
    int rnd_min = 0;

    tl_array_fill_rnd_range(arrey,dim,rnd_min, rnd_max);
    tl_array_print(arrey, dim);
    tl_array_sort_mode(arrey, dim, 0);
    tl_array_print(arrey, dim);

    return 0;
}