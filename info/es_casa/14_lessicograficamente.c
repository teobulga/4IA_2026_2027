/*
Per mercoledì svolgere e condividermi, con le consuete modalità:
strcmp(char* s1, char* s2): ritorna
un intero < 0 se s1 precede s2 lessicograficamente
0 se sono uguali
un intero > 0 se s2 precede s1
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int tl_str_cmp(const char* s1, const char* s2) {
  if (!s1 || !s2) {
    printf("ERRORE");
    exit(EXIT_FAILURE);
  }

  int i;
  for (i = 0; ((s1[i] - s2[i]) == 0) && ((s1[i] || s2[i] == '\0')); i++) {
    if ((s1[i] - s2[i]) == 0) {
      return 0;
    }
  }

  return (s1[i] - s2[i]);
}

int main(void) {
  const char* s1 = "bb";
  const char* s2 = "bbbb";

  int dist = tl_str_cmp(s1, s2);
  printf("%d\n", dist);

  if (dist > 0) {
    printf("s2 precede s1\n");
  } else if (dist < 0) {
    printf("s1 precede s2\n");
  } else {
    printf("uguali\n");
  }

  return 0;
}