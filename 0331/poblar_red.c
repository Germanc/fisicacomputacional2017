#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int poblar_red(int* red, int numero_filas, int numero_columnas, float probabilidad);

int main(){
    int numero_filas;
    int numero_columnas;
    int tamanio_red;
    numero_filas = 10;
    numero_columnas = 10;
    int *red;
    red = malloc((numero_filas*numero_columnas)*sizeof(int));
    float probabilidad;
    probabilidad = 0.5;

    poblar_red(red, numero_filas, numero_columnas, probabilidad) ;
    int i;
    for(i=0;i<(numero_columnas*numero_filas);i++) {
        if((i%numero_columnas)==0) {
            printf("\n");
        }
        else {
            printf(" %i ", red[i]);
        }
    }
    free(red);
}

int poblar_red(int* red, int numero_filas, int numero_columnas, float probabilidad) {
    srand(time(NULL));  
    float valor_aleatorio;
    int i;
    for(i=0; i<(numero_columnas*numero_filas); i++){
        valor_aleatorio = rand()%RAND_MAX;
        if (valor_aleatorio < (probabilidad*RAND_MAX)){
            red[i] = 1;

        }
        else {
            red[i] = 0;
        }
    }
    return 0;

}