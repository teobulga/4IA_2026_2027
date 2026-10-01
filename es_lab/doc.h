// contiene la documentazione delle funzioni descritte in "prototipi.c"

/**inizializzazione di un vettore 
*@param int* vettore da inizializzare
*@param int dimensione del vettore passato
*/
void init_array(int v[], int dim);

/**popolamento manule di un vettore
*@param int* vettore da riempire
*@param int dimensione del vettore passato
*/
void fill_array(int v[], int dim);

/**popolamento random di un vettore
*@param int* vettore da riempire
*@param int dimensione del vettore passato
*/
void random_fill_array(int v[], int dim);

/**stampa a schermo di una matrice bidimensionale
*@param int righe della matrice
*@param int colonne della matrice
*@param int[][] matrice da stampare
*/
void print_matrix(int rows, int cols, int m[rows][cols]);

/**popolamento di una matrice scalare quadrata impostando la diagonale principale
*@param int valore da inserire sulla diagonale principale
*@param int dimensione della matrice quadrata
*@param int[][] matrice da riempire
*/
void quadratic_matrix_scalare(int input_filler, int dim, int m[dim][dim]);

/**verifica se una matrice quadrata e' simmetrica rispetto alla diagonale principale
*@param int dimensione del lato della matrice quadrata
*@param int[][] matrice quadrata da verificare
*@return bool true se la matrice e' simmetrica, false altrimenti
*/
bool quad_matrix_symmetry(int lato_m, int m[lato_m][lato_m]);

/**riempie un vettore con elementi nrd compresi tra max emin (compresi)
*@param int * riferimentoal vettore
*@param int dim dell vettore 
*@param int minimo dell range
*@param int massimo dell range
 */
 void carica_vettor_rnd_range(int V[], int dim, int min, int max);

 /**stampa ilcontenuto di un vettore 
 *@param int * riferimentoal vettore
 *@param int dim dell vettore 
*/
void print_vector(int V[], int dim);

/**calcola e restituiscelamedia del vettore
 *@param int * riferimentoal vettore
 *@param int dim dell vettore
 *@return valore medio
 */
float media_vector(int V[], int dim);