/** Riempie una matrice quadrata con valori casuali compresi tra rnd_min e rnd_max.
 * @param dim dimensione della matrice quadrata
 * @param m matrice da riempire
 * @param rnd_min valore minimo del range
 * @param rnd_max valore massimo del range
 */
void tl_mat_fill_rnd(int dim, int m[dim][dim], int rnd_min, int rnd_max);

/** Riempie un vettore con valori casuali compresi tra 1 e 99.
 * @param v vettore da riempire
 * @param dim dimensione del vettore
 */
void tl_array_fill_rnd(int v[], int dim);

/** Stampa il contenuto di un vettore.
 * @param v vettore da stampare
 * @param dim dimensione del vettore
 */
void tl_array_print(int v[], int dim);

/** Stampa il contenuto di una matrice bidimensionale.
 * @param rows numero di righe della matrice
 * @param cols numero di colonne della matrice
 * @param m matrice da stampare
 */
void tl_mat_print(int rows, int cols, int m[rows][cols]);

/** ritorna quante righe della mat hanno somma superiore alla somma del vett
 * @param r numero di righe della matrice
 * @param c numero di colonne della matrice
 * @param m matrice da stampare
 * @param dim dimensione dell arrey
 * @param v arrey
 */
int mat_sum_line_grt_vect(int r, int c, int dim, int m[r][c], int v[]);