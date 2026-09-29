/*
Per casa: completare e provare su github diagSum(): dice se in una matrice
quadrata di interi la somma degli elementi della diagonale principale eguaglia
quella degli elementi sulla diagonale secondaria;
*/

#include <stdbool.h>
#include <stdio.h>

#define DIM 5

int matrix_diag_primary_sum(int m[DIM][DIM]) {
  int sum = 0;
  for (int i = 0; i < DIM; i++) {
    for (int j = 0; j < DIM; j++) {
      if (i == j) {
        sum += m[i][j];
      }
    }
  }

  return sum;
}

int matrix_diag_secondary_sum(int m[DIM][DIM]) {
  int sum = 0;
  for (int i = 0; i < DIM; i++) {
    for (int j = DIM - 1; j >= 0; j--) {
      if (i + j == DIM - 1) {
        //printf("i = %d ", i);
        //printf("J = %d\n", j);
        sum += m[i][j];
      }
    }
  }

  return sum;
}

int main(void) {
  int m[DIM][DIM] = {
      {1, 1, 1, 1, 1},  //
      {1, 0, 0, 0, 1},  //
      {1, 0, 0, 0, 1},  //
      {1, 0, 0, 0, 1},  //
      {1, 1, 1, 1, 1},  //
  };

  printf("somma diagonbale primaria : %d\n", matrix_diag_primary_sum(m));
  printf("somma diagonbale secondaria : %d\n", matrix_diag_secondary_sum(m));

  matrix_diag_primary_sum(m) == matrix_diag_secondary_sum(m)
      ? printf("la somma delle diag e uguale!!!\n")
      : printf("fuck you\n");

  return 0;
}
