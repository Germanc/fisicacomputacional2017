#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void llenar(int* red, int n, int m, float proba);
void imprimir(int *red, int m, int n);

int main(){
    int n;
    int m;
    n = 10;
    m = 10;
    int *red;
    red = (int *)malloc((n*m)*sizeof(int));
    float proba;
    proba = 0.5;

    llenar(red, n, m, proba) ;
    imprimir(red, n, m);
    free(red);
}

void imprimir(int *red, int m, int n){
    int i;
    for(i=0;i<(m*n);i++) {
        if((i%m)==0) {
            printf("\n");
        }
        else {
            printf(" %i ", red[i]);
        }
    }

}
void llenar(int* red, int n, int m, float proba) {
    srand(time(NULL));  
    float valor_aleatorio;
    int i;
    for(i=0; i<(m*n); i++){
        valor_aleatorio = rand()%RAND_MAX;
        if (valor_aleatorio < (proba*RAND_MAX)){
            red[i] = 1;

        }
        else {
            red[i] = 0;
        }
    }

}
