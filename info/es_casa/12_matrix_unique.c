// fare per giovedì, con le consuete modalità:
// allDifferentM(): dice se tutti gli elementi di una matrice sono diversi;

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "_teolib.h"

#define DIM 5

bool tl_matrix_unique(int r, int c, int m[r][c])
{

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            int check = m[i][j];
            for (int k = 0; k < r; k++)
            {
                for (int w = 0; w < r; w++)
                {
                    bool same_row = (k == i);
                    bool same_col = (w == j);
                    if ((m[k][w] == check) && (!same_row || !same_col))
                    {
                        printf("doppio :%d\n", check);
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

int main(void){

    int m[DIM][DIM];
    tl_mat_fill_rnd(DIM,m,1, 1000);
    tl_mat_print(DIM,DIM,m);
    printf("\n\n");

    if(tl_matrix_unique(DIM, DIM, m)){
        printf("la matrice e unica");
    }else {
        printf("la matrice NON e unica\n");
    }
    return 0;
}