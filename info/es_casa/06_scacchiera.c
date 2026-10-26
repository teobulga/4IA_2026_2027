#include <stdbool.h>
#include <stdio.h>

#define DIM 5
#define WHITE false
#define BLACK true

void print_mat(int m[DIM][DIM]) {
  for (int i = 0; i < DIM; i++) {
    for (int j = 0; j < DIM; j++) {
      if (m[i][j]) {
        printf("@ ");
      } else {
        printf("- ");
      }
    }
    printf("\n");
  }
}

void checkboard(int m[DIM][DIM]) {
  for (int i = 0; i < DIM; i++) {
    for (int j = 0; j < DIM; j++) {
      if (i % 2 == 0) {
        if (j % 2 == 0) {
          m[i][j] = BLACK;
        } else {
          m[i][j] = WHITE;
        }
      } else {
        if (j % 2 == 0) {
          m[i][j] = WHITE;
        } else {
          m[i][j] = BLACK;
        }
      }
    }
  }
}

/* void checkboard2(int m[DIM][DIM]) {
  for (int i = 0; i < DIM; i++) {
    for (int j = 0; j < DIM; j++) {
      m[i][j] = ((i + j) % 2) == 0;
    }
  }
} */

int main(void) {
  int m[DIM][DIM] = {0};

  checkboard(m);
  print_mat(m);

  return 0;
}