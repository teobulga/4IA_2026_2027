/*
    Realizzare il programma per il gioco CatchThePin.
    Lo scopo del gioco è indovinare un codice a 5 cifre casuali comprese tra 0 e 9 generate random
    dal computer.
    Ogni volta all'utente viene richiesto di inserire i 5 numeri, viene verificata la sequenza
    e vengono stampati i numeri con il seguente schema:
    - se numero è corretto viene visualizzato il numero.
    - se numero non è corretto viene visualizzato un '?'
    Il gioco conta i tentativi utilizzati per indovinare l'intero codice, ovviamente il gioco
    termina quando l'utente ha indovinato tutte e 5 le cifre.

    Realizzare quindi il gioco per funzioni:
    - creaCodiceSegreto.
    - richiediCodiceUtente.
    - verificaStampaCodice.
    il tutto inserito in un ciclo do-while per la ripetizione finche codice non è esatto.
*/

// gcc 11_catch_the_Pin.c _teolib.c -o 11_catch_the_Pin && ./11_catch_the_Pin



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "_teolib.h"

int main(void){
    int dim = 5;

    int codice_segreto[dim];
    int codice_utente[dim];

    int rnd_max = 9;
    int rnd_min = 0;

    int guess_cnt = 0;

    tl_array_fill_rnd_range(codice_segreto, dim, rnd_min, rnd_max);

    do{
        printf("\n");
        printf("----GUESS THE PIN----\n\n");
        printf("inserici 5 numeri interi compresi tra 0 e 9, e prova d indovinare il pin\n");

        for(int i = 0; i<dim; i++){
            scanf("%d", &codice_utente[i]);
        }


        for(int j=0; j<dim; j++){
            if(codice_utente[j] == codice_segreto[j]){
                printf("%d", codice_utente[j]);
                guess_cnt++;
            }else{
                printf("?");   
            }
        }
        printf("\n");



        /*
                for(int j=0; j<dim; j++){
            for(int k=0; k<dim; k++){
                if (codice_utente[j] == codice_segreto[k]){
                    printf("%d", codice_utente[j]);
                    guess_cnt++;
                }else{
                    printf("_"); // stampa 25 volte causa doppio ciclo dim*dim
                }
            }
        }
        */


    }while(guess_cnt<dim);


    return 0;
}