#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(int argc, char *argv[])
{
    int numeros[N][N];
    int i,j,k;

    k = 1;
    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            numeros[i][j] = k++;
        }
    }

    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            printf("%d ", numeros[i][j]);
        }
        printf("\n");
    }

    // primera fila
    for(j=0;j<N;j++) {
        printf("%d ", numeros[0][j]);
    }
    printf("\n");

    // ultima fila
    for(j=0;j<N;j++) {
        printf("%d ", numeros[N-1][j]);
    }
    printf("\n");

    // primera columna
    for(i=0;i<N;i++) {
        printf("%d ", numeros[i][0]);
    }
    printf("\n");

    // primera columna
    for(i=0;i<N;i++) {
        printf("%d ", numeros[i][N-1]);
    }
    printf("\n");

    // diagonal principal
    for(i=0;i<N;i++) {
        printf("%d ", numeros[i][i]);
    }
    printf("\n");

    // diagonal inversa (elementos con i+j == N - 1)
    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            if( i+j==N-1 ) {
                printf("%d ", numeros[i][j]);
            }
        }
    }
    printf("\n");

    // zona superior (triangulo)
    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            if( i<j ) {
                printf("%d ", numeros[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}
