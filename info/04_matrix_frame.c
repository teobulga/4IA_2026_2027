// Per casa: fare su github il seguente esercizio:
// corniceValoreM(): dice se tutti gli elementi della cornice della matrice
// quadrata di interi valgono v;

#include <stdbool.h>
#include <stdio.h>

#define DIM 5

// Calcola se il vettore contiene solo N
bool is_vector_n(int n, int* vector) {
  for (int i = 0; i < DIM; i++) {
    if (vector[i] != n) {
      return false;
    }
  }
  return true;
}

// Controlla chhe gli estremi del vettore siano N
bool is_extremes_vector_n(int n, int* vector) {
  if ((vector[0] && vector[DIM - 1]) != n) {
    return false;
  }
  return true;
}

// Controlla se la conrnice di una matrice quadrata è composta solo da N
bool is_matrix_frame_n(int n, int m[DIM][DIM]) {
  // check prima riga
  if (!is_vector_n(n, m[0])) {
    return false;
  }

  // check ultima riga
  if (!is_vector_n(n, m[DIM - 1])) {
    return false;
  }

  // check estremi righe rintermedie (ossia prima e ultima colonna)
  for (int i = 1; i < DIM - 1; i++) {
    if (!is_extremes_vector_n(n, m[i])) {
      return false;
    }
  }

  return true;
}

int main(void) {
  int user_input = 0;

  int m[DIM][DIM] = {
      {1, 1, 1, 1, 1},  //
      {1, 0, 0, 0, 1},  //
      {1, 0, 0, 0, 1},  //
      {1, 0, 0, 0, 1},  //
      {1, 1, 1, 1, 1},  //
  };

  printf("inserisci un numero: \n");
  scanf("%d", &user_input);
  fflush(stdin);

  is_matrix_frame_n(user_input, m) ? printf("la matrice ha una cornice!!!\n")
                                   : printf("fuck you\n");

  return 0;
}