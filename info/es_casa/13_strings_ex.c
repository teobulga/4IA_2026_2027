// strcpy2(char dst[], char src[]): ricopia la stringa sorgente src[] nella destinazione dst[];

// strcat2(char* dst, char* s) appende s alla fine di dst;

#include <stdio.h>
#define DIM 50
#define ST '\0'

void strcpy2(char dst[], char src[]){ 
    int i;
    for (i = 0; src[i] != ST; i++){
        dst[i] = src[i];
    }
    dst[i] = ST;                // ricordarsi di aggiungere manualmente /0 post ciclo 
}

void strcat2(char dst[], char s[]){
    int i, j;

    for (i = 0; dst[i] != ST; i++){     // arrivo alla fine della prima stringa 
    }

    for (j = 0; s[j] != ST; j++, i++){      // la allungo con la seconda 
        dst[i] = s[j];
    }
    
    dst[i] = ST;   // inserico il terminatore 
}

int main() {
    char sorgente[] = "Programmare in C";
    char destinazione[DIM];

    printf("=== Test strcpy2 ===\n");
    printf("Stringa sorgente:     \"%s\"\n", sorgente);
    
    strcpy2(destinazione, sorgente);
    
    printf("Stringa destinazione: \"%s\"\n\n", destinazione);

    char S1[DIM] = "Hello";
    char S2[] = " World!";

    printf("=== Test strcat2 ===\n");
    printf("Stringa S1 iniziale:  \"%s\"\n", S1);
    printf("Stringa S2 da unire:  \"%s\"\n", S2);
    
    strcat2(S1, S2);
    
    printf("Stringa S1 finale:    \"%s\"\n", S1);

    return 0;
}