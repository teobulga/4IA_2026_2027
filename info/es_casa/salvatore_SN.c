#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int *create_fraction(int num, int den){
    int *f = malloc(sizeof(int)*2);      // punttatore di dimensione 8 byte (int = 4 byte)
    if (f == NULL){
        return NULL;       // check se ce spazio per l assegnazione 
    }
    f[0] = num;
    f[1] = den;
    return f;
}

void simplify_fraction(int *f){
    for(int d = 2; d < f[0] && d < f[1]; d++){
        if(f[0] % d == 0 && f[1] % d == 0 ){
            f[0] /= d;
            f[1] /= d;
        }
    }
}

void print_fraction(int *f){
    printf("%d/%d\n", f[0], f[1]);
}


int main(void){
    int *frazione1 = create_fraction(10,20);
    int *frazione2 = create_fraction(6,3);

    simplify_fraction(frazione1);
    simplify_fraction(frazione2);

    print_fraction(frazione1);
    print_fraction(frazione2);
    return 0;
}

