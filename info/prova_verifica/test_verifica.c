#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "array_lib.c"

#define DIM 15

int main(void){

    srand(time(NULL));

    int vet[DIM];
    int rnd_max = 25;
    int user_input;
    int target;
    int substitute;

    random_fill_array(vet, DIM, rnd_max);
    
    printf("Vettore generato casualmente (valori tra 1 e %d):\n", rnd_max);
    print_vector_line(vet, DIM);
    printf("\n--------------------------------------------------\n\n");

    // Ricerca del massimo
    printf("-> Il valore massimo all'interno del vettore e': %d\n", vector_max_finder(vet, DIM));
    printf("\n--------------------------------------------------\n\n");

    // Conteggio
    printf("Inserisci un numero (tra 1 e %d) per verificare quante volte e' presente nel vettore: ", rnd_max);
    scanf("%d", &user_input);
    printf("\n");

    if (user_input > rnd_max || user_input < 1) {
        printf("[Attenzione] Il numero inserito e' fuori dall'intervallo consentito (1-%d).\n", rnd_max);
    } else {
        printf("-> Il valore %d compare %d volta/e nel vettore.\n", user_input, vector_equal_number_counter(vet, DIM, user_input));
    }
    printf("\n--------------------------------------------------\n\n");

    // Sostituzione 
    printf("Inserisci due valori separati da uno spazio (es. 'vecchio nuovo'):\n");
    printf("-> Il primo valore verra' cercato e sostituito con il secondo: ");
    scanf("%d %d", &target, &substitute);
    printf("\n");

    printf("-> Il valore %d e' stato sostituito con successo %d volta/e.\n", target, vector_finder_sostituter(vet, DIM, target, substitute));
    printf("\n==================================================\n");

    return 0;
}