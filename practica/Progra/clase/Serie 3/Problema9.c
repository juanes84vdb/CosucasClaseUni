/*
 * Problema 9. 
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
            if( i==0 || i==N-1 || j==0 || j==N-1 ) {    /* Borde */
                matriz[i][j] = 1;
            }
            else if( i==j ) {       /* Diagonal  1 */
                matriz[i][j] = 1;
            }
            else if( i+j==N-1 ) {       /* Diagonal  2 */
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
