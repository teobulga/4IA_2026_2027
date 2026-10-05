#ifndef __TEOLIB_H__
#define __TEOLIB_H__

// --------- ARRAY ---------

/**inizializzazione di un vettore
 *@param int* vettore da inizializzare
 *@param int dimensione del vettore passato
 */
void tl_array_init(int v[], int dim);

/**popolamento random di un vettore
 *@param int* vettore da riempire
 *@param int dimensione del vettore passato
 */
void tl_array_fill_rnd(int v[], int dim);

/**riempie un vettore con elementi random compresi tra min e max (compresi)
 *@param int* riferimento al vettore
 *@param int dim dimensione del vettore
 *@param int min minimo del range
 *@param int max massimo del range
 */
void tl_array_fill_rnd_range(int v[], int dim, int min, int max);

/**stampa il contenuto di un vettore
 *@param int* riferimento al vettore
 *@param int dim dimensione del vettore
 */
void tl_array_print(int v[], int dim);

/**calcola e restituisce la media del vettore
 *@param int* riferimento al vettore
 *@param int dim dimensione del vettore
 *@return valore medio
 */
float tl_array_average(int v[], int dim);

// --------- MATRICI ---------

/**popolamento random di una matrice con valori compresi tra min e max
 *@param int dimensione della matrice quadrata
 *@param int[][] matrice da riempire
 *@param int minimo del range
 *@param int massimo del range
 */
void tl_mat_fill_rnd(int dim, int m[dim][dim], int rnd_min, int rnd_max);

/**stampa a schermo di una matrice bidimensionale
 *@param int righe della matrice
 *@param int colonne della matrice
 *@param int[][] matrice da stampare
 */
void tl_mat_print(int rows, int cols, int m[rows][cols]);

/**popolamento di una matrice scalare quadrata impostando la diagonale principale
 *@param int valore da inserire sulla diagonale principale
 *@param int dimensione della matrice quadrata
 *@param int[][] matrice da riempire
 */
void tl_square_mat_scalar(int input_filler, int dim, int m[dim][dim]);

/**verifica se una matrice quadrata e' simmetrica rispetto alla diagonale principale
 *@param int dimensione del lato della matrice quadrata
 *@param int[][] matrice quadrata da verificare
 *@return bool true se la matrice e' simmetrica, false altrimenti
 */
bool tl_square_mat_symmetry(int lato, int m[lato][lato]);

#endif /* __TEOLIB_H__ */