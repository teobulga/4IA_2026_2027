// Per casa, con le consuete modalità:
// maxSumM(): ritorna il valore massimo degli elementi di una matrice di interi e la somma dei suoi elementi

#include <stdio.h>
#include <stdbool.h>
#include "teolib/teolib.h"

#define DIM 5

int max_n_sum(int dim, int m[dim][dim], int *sum)
{

    int max = 0;

    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            if (m[i][j] > max)
            {
                max = m[i][j];
            }
            *sum += m[i][j];
        }
    }
    return max;
}

int main(void)
{
    int m[DIM][DIM];
    int sum = 0;

    tl_mat_fill_rnd(DIM, m, 1, 50);
    tl_mat_print(DIM, DIM, m);

    printf("valore massimo :%d\n", max_n_sum(DIM, m, &sum));
    printf("somma totale delle celle :%d\n", sum);

    return 0;
}