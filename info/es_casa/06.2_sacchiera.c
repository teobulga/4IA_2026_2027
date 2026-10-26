/*
Per casa: completare, provare su github e condividere qui il sorgente di
scacchieraM(): verifica se una matrice quadrata di interi è una "scacchiera", ovvero se vi sono presenti solo 0 e 1 alternati tra loro;
*/

#include <stdio.h>
#include <stdbool.h>

bool is_M_chessboard(int dim, int m[dim][dim]){
    for(int i=0; i<dim; i++){
        for(int j=0; j<dim; j++){
            
            if (m[i][j] != 0 && m[i][j] != 1){   //fail fast
                return false;
            }
            
            // prevenzione out of bound + chack(mate) ugualinza su celle orizzontali e verticali.
            if (j > 0 && m[i][j] == m[i][j - 1]){ // x --> x(sx)
                return false;
            }

            if (i > 0 && m[i][j] == m[i - 1][j]){ // x --> x(top)
                return false;
            }
        }
    }
}

// varie pove per vedere se funziona ancora da impplementare