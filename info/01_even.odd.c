// countEvenOddV(): ritorna il numero degli elementi pari e di quelli dispari di
// un vettore di interi;

#include <stdio.h>

#define countof(array) (sizeof(array) / sizeof(array[0]))

void countEvenOddV(int v[], int dim, int* count_pari, int* count_dispari) {
  if (dim == 0) {
    *count_pari = 0;
    *count_dispari = 0;
  }

  for (int i = 0; i < dim; i++) {
    if (v[i] % 2 == 0) {  // pari
      (*count_pari)++;
    } else {
      (*count_dispari)++;
    }
  }
}

int main(void) {
  int v[] = {};

  int p = 0;
  int d = 0;

  countEvenOddV(v, countof(v), &p, &d);

  printf("nel vettore v sono presenti : %d numeri pari e %d dipari\n", p, d);
  return 0;
}