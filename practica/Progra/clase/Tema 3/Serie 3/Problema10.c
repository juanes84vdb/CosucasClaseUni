/*
 * Problema 10. 
 * Escribir un programa en C que me rellene una matriz NxN (siendo N par)  de la siguiente manera (ejemplo para N=8)

 */
 
#include <stdio.h>

#define N  16

int main(int argc, char **argv)
{
    int matriz[N][N];
    int i, j;

    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            if( i==N/2 || i==N/2-1 || j==N/2 || j==N/2-1 ) {    /* Cruz */
                matriz[i][j] = 1;
            }
            else 
                matriz[i][j] = 0;
        }
    }
    
    /* Imprimimos la matriz */
    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
