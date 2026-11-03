
#ifndef __TEOLIB_H__
#define __TEOLIB_H__

#include <stdbool.h>


// --------- ARRAY ---------

/** Inizializza tutti gli elementi di un vettore a zero.
 * @param v vettore da inizializzare
 * @param dim dimensione del vettore
 */
void tl_array_init(int v[], int dim);

/** Riempie un vettore con valori casuali compresi tra 1 e 99.
 * @param v vettore da riempire
 * @param dim dimensione del vettore
 */
void tl_array_fill_rnd(int v[], int dim);

/** Riempie un vettore con valori casuali compresi tra min e max (estremi inclusi).
 * @param v vettore da riempire
 * @param dim dimensione del vettore
 * @param min valore minimo del range
 * @param max valore massimo del range
 */
void tl_array_fill_rnd_range(int v[], int dim, int min, int max);

/** Stampa il contenuto di un vettore.
 * @param v vettore da stampare
 * @param dim dimensione del vettore
 */
void tl_array_print(int v[], int dim);

/** Calcola e restituisce la media aritmetica degli elementi di un vettore.
 * @param v vettore da analizzare
 * @param dim dimensione del vettore
 * @return media aritmetica degli elementi oppure 0.0 se i parametri non sono validi
 */
float tl_array_average(int v[], int dim);

/** Ordina un vettore in modo crescente o decrescente.
 * @param v vettore da ordinare
 * @param dim dimensione del vettore
 * @param mode modalità di ordinamento: 0 = crescente, 1 = decrescente
 */
void tl_array_sort_mode(int v[], int dim, int mode);


// --------- MATRICI ---------

/** Riempie una matrice quadrata con valori casuali compresi tra rnd_min e rnd_max.
 * @param dim dimensione della matrice quadrata
 * @param m matrice da riempire
 * @param rnd_min valore minimo del range
 * @param rnd_max valore massimo del range
 */
void tl_mat_fill_rnd(int dim, int m[dim][dim], int rnd_min, int rnd_max);

/** Stampa il contenuto di una matrice bidimensionale.
 * @param rows numero di righe della matrice
 * @param cols numero di colonne della matrice
 * @param m matrice da stampare
 */
void tl_mat_print(int rows, int cols, int m[rows][cols]);

/** Inizializza una matrice scalare quadrata.
 * Inserisce input_filler sulla diagonale principale e zero negli altri elementi.
 * @param input_filler valore da inserire sulla diagonale principale
 * @param dim dimensione della matrice quadrata
 * @param m matrice da inizializzare
 */
void tl_square_mat_scalar(int input_filler, int dim, int m[dim][dim]);

/** Verifica se una matrice quadrata è simmetrica rispetto alla diagonale principale.
 * @param lato dimensione del lato della matrice quadrata
 * @param m matrice quadrata da verificare
 * @return true se la matrice è simmetrica, false altrimenti
 */
bool tl_square_mat_symmetry(int lato, int m[lato][lato]);

/** Calcola e restituisce la media aritmetica degli elementi di una matrice.
 * @param rows numero di righe della matrice
 * @param cols numero di colonne della matrice
 * @param m matrice da analizzare
 * @return media aritmetica degli elementi oppure 0.0 se le dimensioni non sono valide
 */
float tl_mat_average(int rows, int cols, int m[rows][cols]);

/** Calcola e stampa la somma degli elementi di ogni riga della matrice.
 * @param rows numero di righe della matrice
 * @param cols numero di colonne della matrice
 * @param m matrice da analizzare
 */
void tl_mat_sum_rows(int rows, int cols, int m[rows][cols]);

/** Calcola e stampa la somma degli elementi del triangolo superiore,
 * del triangolo inferiore e della diagonale principale.
 * @param rows numero di righe della matrice
 * @param cols numero di colonne della matrice
 * @param m matrice da analizzare
 */
void tl_mat_triangle_sum(int rows, int cols, int m[rows][cols]);


// --------- STRINGHE ---------

/** Inizializza tutti i caratteri di una stringa a '\0'.
 * @param dim dimensione del buffer
 * @param str stringa da inizializzare
 */
void tl_str_init(int dim, char str[dim]);

/** Calcola e restituisce la lunghezza di una stringa, escludendo il terminatore '\0'.
 * @param s stringa da analizzare
 * @return numero di caratteri della stringa, oppure 0 se il puntatore è NULL
 */
unsigned int tl_str_len(const char* s);

/** Copia una stringa sorgente nella stringa destinazione.
 * Verifica che il buffer di destinazione abbia spazio sufficiente.
 * @param dst buffer di destinazione
 * @param dim capacità del buffer di destinazione
 * @param src stringa sorgente da copiare
 * @return true se la copia è riuscita, false se i parametri non sono validi o manca spazio
 */
bool tl_str_copy(char dst[], int dim, const char src[]);

/** Concatena una stringa sorgente alla fine della stringa destinazione.
 * Verifica che il buffer di destinazione abbia spazio sufficiente.
 * @param dst buffer di destinazione contenente la stringa iniziale
 * @param dim capacità del buffer di destinazione
 * @param src stringa da aggiungere
 * @return true se la concatenazione è riuscita, false se i parametri non sono validi o manca spazio
 */
bool tl_str_concat(char dst[], int dim, const char src[]);

/** Confronta lessicograficamente due stringhe.
 * @param s1 prima stringa da confrontare
 * @param s2 seconda stringa da confrontare
 * @return valore minore di 0 se s1 precede s2, 0 se sono uguali,
 * valore maggiore di 0 se s1 segue s2
 */
int tl_str_cmp(const char* s1, const char* s2);

/** Verifica se una sottostringa è presente in una stringa a partire da una posizione specifica.
 * @param haystack stringa in cui effettuare la ricerca
 * @param pos posizione iniziale da cui verificare la sottostringa
 * @param needle sottostringa da cercare
 * @return true se needle è presente a partire da pos, false altrimenti
 */
bool tl_str_substr_at_pos(const char* haystack, int pos, const char* needle);

/** Cerca la prima occorrenza di una sottostringa all'interno di una stringa.
 * @param s stringa in cui effettuare la ricerca
 * @param subStr sottostringa da cercare
 * @return posizione della prima occorrenza oppure -1 se non viene trovata
 */
int tl_str_find_substr(const char* s, const char* subStr);


#endif /* __TEOLIB_H__ */
