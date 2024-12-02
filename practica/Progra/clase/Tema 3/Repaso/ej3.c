#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 20

/*
        *
        *
        *
      *****
       ***
        *
*/

int main(int argc, char *argv[])
{
    char matriz[N][N];
    int i,j,n_espacios;

    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            if( i<N/2 ) {
                if( j==N/2 ) {
                    matriz[i][j] = '*';
                }
                else {
                    matriz[i][j] = ' ';
                }
            }
        }
    }

    for(i=N/2;i<N;i++) {
        n_espacios = i-N/2;
        for(j=0;j<N;j++) {
            if( j<n_espacios || j>N-1-n_espacios ) {
                matriz[i][j] = ' ';
            }
            else {
                matriz[i][j] = '*';
            }
        }
    }


    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}



