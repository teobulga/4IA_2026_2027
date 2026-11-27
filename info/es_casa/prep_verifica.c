
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// prende una stringa sorgente e ne rimuove la o le sottostringhe presenti
int find_subs(char* haystack, char* nedlee) {
  for (int i = 0; haystack[i] != '\0'; i++) {
    for (int j = 0; nedlee[j] != '\0'; j++) {
      if (nedlee[j] == haystack[j + i]) {
        if (j == (int)strlen(nedlee) - 1) {
          return i;
        }

      } else {
        break;
      }
    }
  }
  return -1;
}

bool remove_subs(char* haystack, char* nedlee) {
  // int hay_len = strlen(haystack);
  int ned_len = strlen(nedlee);

  int pos = 0;
  pos = find_subs(haystack, nedlee);
  printf("posizione della sottostringa : %d\n", pos);

  if (pos >= 0) {
    for (int x = pos; x < x + ned_len; x++) {
      printf("valore di x : %d\n", x);

      printf("sostituisco haystack[%d]=%c con haystack[%d]=%c\n",
             x,                     //
             haystack[x],           //
             x + ned_len,           //
             haystack[x + ned_len]  //
      );

      haystack[x] = haystack[x + ned_len];

      if (haystack[x] == '\0') {
        return true;
      } else {
        // continuo il ciclo dato che non ho finito ('\0')
      }
    }
  }
  return false;
}

int main(void) {
  char str[] = "aokm";
  char subs[] = "okm";

  int pos = find_subs(str, subs);

  if (pos >= 0) {
    printf("sottostringa trovata alla posizione %d\n", pos);
  } else {
    printf("sottostringa NON trovata\n");
  }

  if (remove_subs(str, subs)) {
    printf("la sottostringa e stata rimossa: %s\n", str);
  } else {
    printf("la sottostringa NON esiste nella stringa :%s\n", str);
  }

  return 0;
}