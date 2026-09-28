/*
Desc: Realizzare un programma C che richieda una stringa da tastiera (max 20
char):
      - determina la sua lunghezza e la comunica.
      - la stampa al contrario char-by-char.
      - esegue il conteggio delle vocali.

*/

#include <stdio.h>
#include <string.h>

#define DIM 21  // 20 caratteri massimi + '\0' --> (carattere terminatore)

int str_lenght(char str_input[], int dim) {
  int str_lenght;

  for (int i = 0; i > dim; i++) {
    if (str_input[i] == '\0') {
      str_lenght = 0;
    } else {
      str_lenght++;
    }
  }
  return str_lenght;
}

int main(void) {

  char user_input[DIM];  // verra riempita con la frase data dall utente
  int tmp;

  do {
    printf("inserisci una stringa (max 20 caratteri): \n");
    scanf("%s", user_input);

    tmp = str_lenght(user_input, 21);

  } while (tmp > 21);

  printf("la stringa inserita misura: %d\n", tmp);



  return 0;
}