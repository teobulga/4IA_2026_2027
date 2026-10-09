// contiene i prototipi delle funzioni descritte in "doc.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include "_teolib.h"

// --------- ARRAY ---------

void tl_array_init(int v[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        v[i] = 0;
    }
}

void tl_array_fill_rnd(int v[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        v[i] = 1 + (rand() % 99);
    }
}

void tl_array_fill_rnd_range(int v[], int dim, int min, int max)
{
    srand(time(NULL));
    for (int i = 0; i < dim; i++)
    {
        v[i] = min + (rand() % (max - min + 1));
    }
}

void tl_array_print(int v[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        printf("%d ", v[i]);
    }
}

float tl_array_average(int v[], int dim)
{
    int sum = 0;
    for (int i = 0; i < dim; i++)
    {
        sum += v[i];
    }
    return (sum / dim);
}

void tl_array_sort_mode(int v[], int dim, int mode){
    int tmp;

    if(mode == 0){ // ordinamente crescende dell array
        for(int i= 0; i<dim; i++){
            for(int j= i; j<dim; j++){
                if(v[j] > v[i]){
                    tmp = v[i];
                    v[i] = v[j];
                    v[j] = tmp;
                }
            }
        }
    }

     if(mode == 1){ // ordinamente decrescente dell array
        for(int i= 0; i<dim; i++){
            for(int j= i; j<dim; j++){
                if(v[j] < v[i]){
                    tmp = v[i];
                    v[i] = v[j];
                    v[j] = tmp;
                }
            }
        }
    }
}

// --------- MATRICI ---------

void tl_mat_fill_rnd(int dim, int m[dim][dim], int rnd_min, int rnd_max)
{
    srand(time(NULL));
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            m[i][j] = rnd_min + (rand() % (rnd_max - rnd_min + 1));
        }
    }
}

void tl_mat_print(int rows, int cols, int m[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (j == 0)
                printf("[");
            printf("%3d ", m[i][j]);
            if (j == cols - 1)
                printf("]");
        }
        printf("\n");
    }
}

void tl_square_mat_scalar(int input_filler, int dim, int m[dim][dim])
{
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            if (i == j)
            {
                m[i][j] = input_filler; // Diagonale
            }
            else
            {
                m[i][j] = 0; // Altri elementi
            }
        }
    }
}

bool tl_square_mat_symmetry(int lato, int m[lato][lato])

{
    for (int i = 0; i < lato; i++)
    {
        for (int j = i + 1; j < lato; j++)
        { // +1 per saltare il caso 0 0
            if (m[i][j] != m[j][i])
            {
                return false; // fail fast
            }
        }
    }
    return true;
}

float tl_mat_media(int rows, int cols, int m[rows][cols]){
    int sum = 0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            sum += m[i][j];
        }
    }
    return (sum/(rows*cols));
}

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