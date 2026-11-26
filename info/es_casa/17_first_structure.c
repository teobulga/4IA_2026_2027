#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// fare una struttutura che definisce un punto bidimensionale e poi fare una
// funzione che calcola la distranza tra due punti e la ritorna come float

typedef struct Point3D {
  int x;
  int y;
  int z;
} Point3D;

void point_print(Point3D p) { printf("{x: %d, y: %d, z: %d }", p.x, p.y, p.z); }

Point3D point_init(int x, int y, int z) {
  Point3D ret;
  ret.x = x;
  ret.y = y;
  ret.z = z;
  return ret;
}

void point_alloc(Point3D* p) {
  p = malloc(sizeof(*p));
  if (!p) {
    exit(EXIT_FAILURE);
  }
  memset(p, 1, sizeof(*p));
}

double point_distance(Point3D a, Point3D b) {
  return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2) + pow(b.z - a.z, 2));
}

// sqrt( (x2 - x1)^2 + (y2 - y1) ^2  )

int main(void) {
  Point3D a = point_init(0, 0, 0);
  Point3D b = point_init(10, 10, 10);

  printf("la distanza tra ");
  point_print(a);
  printf(" e ");
  point_print(b);
  printf(" misura: %f\n", point_distance(a, b));

  return 0;
}