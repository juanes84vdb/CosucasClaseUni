#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int numeros[10];
    int* pnumeros = NULL;
    int i;
    int** matriz = NULL;

    pnumeros = &numeros[0];
    // o  pnumeros = numeros

    for(i=0;i<10;i++) {
        numeros[i] = i + 1;
    }

    for(i=0;i<10;i++) {
        pnumeros[i] = i + 1;
    }

    for(i=0;i<10;i++) {
        *(pnumeros+i) = i + 1;
    }

    for(i=0;i<10;i++) {
        *(numeros+i) = i + 1;
    }

    // Creacion de una matriz 3x4
    matriz = (int**)malloc(3*sizeof(int*));
    for(i=0;i<3;i++) {
        matriz[i] = (int*)malloc(4*sizeof(int));
    }
    matriz[0][2] = 5;

    // Liberacion de una matriz 3x4
    for(i=0;i<3;i++) {
        free(matriz[i]);
    }
    free(matriz);



    return 0;
}
