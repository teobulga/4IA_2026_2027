/*
Per venerdì svolgere e condividermi, con le consuete modalità:

bool substrAtPos(char *s, int pos, char *subStr): subStr occorre in s alla
posizione pos?

es "albe" occorre in "ma alberto" (a partire da) la posizione 3, quindi
substrAtPos("ma alberto", 3, "albe") == true, ma substrAtPos("ma alberto", 0,
"albe") == false


Per la prima lezione di informatica della prossima settimana, completare e
consegnare

int findsubStr(char *s, char *subStr):  ritorna la posizione di inizio di
substr in s, se esiste, -1 altrimenti; (fortemente consigliato: usare
substrAtPos())


!!! assumo che pos sia indicato come indice!!!
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int tl_str_len(char* s) {
  if (!s) {
    printf("stringa sorgente nulla\n");
    exit(EXIT_FAILURE);
  }

  unsigned int len = 0;
  while (s[len] != '\0') {
    len++;
  }

  return len;
}

bool substrAtPos(char* haystack, int pos, char* needle) {
  if (!haystack) {
    printf("stringa sorgente nulla\n");
    exit(EXIT_FAILURE);
  }
  if (!needle) {
    printf("sottostringa nulla\n");
    exit(EXIT_FAILURE);
  }

  int hl = tl_str_len(haystack);

  int nl = tl_str_len(needle);

  if (pos >= hl) {
    printf("l' indice %d non puo esistere nella stringa di lunghezza %d\n", pos,
           hl);
    exit(EXIT_FAILURE);
  }

  if (nl > hl) {
    printf("la sottostringa deve essere piu corta della stringa sorgente\n");
    exit(EXIT_FAILURE);
  }

  int i = 0;
  while (needle[i] != '\0') {
    printf("[inter: %d]\n", i);
    if (haystack[pos] != needle[i]) {
      return false;
    } else {
      i++;
      pos++;
    }
  }

  return true;
}

int findsubStr(char* s, char* subStr) {
  for (int i = 0; s[i] != '\0'; i++) {
    if (substrAtPos(s, i, subStr)) {
      return i;
    }
  }
  return -1;
}

int main(void) {
  char* s = "ciao";
  char* find = "a";
  int pos = 3;

  if (substrAtPos(s, pos, find)) {
    printf("%s e contenuta in %s alla posizione %d\n", find, s, pos);
  } else {
    printf("%s non e contenuta in %s alla posizione %d\n", find, s, pos);
  }

  return 0;
}