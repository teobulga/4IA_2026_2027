// Per mercoledì: removeChar(char s[], char del); // rimuove del da s (accorciando eventualmente s);
// removeChar("pazzo", 'z') --> "pao"

/*
Per la prossima lezione di informatica (giovedì) completare e consegnare
bool repeatedChars(char s[]): dice se una stringa ha dei caratteri ripetuti; // "carlo" --> no, "carla" --> si
*/

#include <stdio.h>
#include <stdbool.h>

bool repeatedChars(char s[]){
    for (int i = 0; s[i] != '\0'; i++){
        for (int j = i+1; s[j] != '\0'; j++){
            if (s[i] == s[j]){
                return true;
            }
        }
    }
    return false;
}

void removeChar(char s[], char del){
    for (int i = 0; s[i] != '\0'; i++){
        if(s[i] == del){
            for(int j = i; s[j] != '\0'; j++){
                s[j] = s[j+1];
            }
            i--;
        }
    }
}


int main(){
    char s[] = "pazzo";

    printf("Ripetuti: %s\n", repeatedChars(s) ? "si" : "no");
    printf("Prima: %s\n", s);
    removeChar(s, 'z');
    printf("Dopo: %s\n", s);

    return 0;
}