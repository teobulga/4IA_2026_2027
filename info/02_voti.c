#include <float.h>
#include <stdio.h>

#define DIM 5

float vector_max(float v[], int dim) {
  float max = 0;

  for (int i = 0; i < dim; i++) {
    if (v[i] > v[i + 1]) {
      max = v[i];
    }
  }

  return max;
}

float vector_min(float v[], int dim) {
  float min = FLT_MAX;

  for (int i = 0; i < dim; i++) {
    if (v[i] < min) {
      min = v[i];
    }
  }

  return min;
}

float vector_media(float v[], int dim) {
  float media = 0;
  float acc = 0;
  for (int i = 0; i < dim; i++) {
    acc = v[i] + acc;
  }
  return media = acc / dim;
}

int main(void) {
  float voti[DIM];
  float voto;

  for (int i = 0; i < DIM; i++) {
    printf("inserisci un nuovo voto: \n");
    scanf("%f", &voto);
    if ((voto > 10) || (voto < 0)) {
      printf("fuori dalla scala di valutazione, riprova \n");
      i--;
    } else {
      voti[i] = voto;
    }
  }

  float max = vector_max(voti, DIM);
  float min = vector_min(voti, DIM);
  float media = vector_media(voti, DIM);

  printf("il voto piu alto é : %f \n", max);
  printf("il voto piu basso é : %f \n", min);
  printf("il voto piu medio é : %f \n", media);

  return 0;
}