#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(int argc, char *argv[])
{
    char tabla[N][N];
    int i,j;

    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            if( i==0 || i==N-1 ) {
               tabla[i][j] = '0';
            }
            else if( j==0 || j==N-1 ) {
               tabla[i][j] = '0';
            }
            else if( i==j ) {
               tabla[i][j] = '0';
            }
            else if( i+j==N-1 ) {
               tabla[i][j] = '0';
            }
            else {
               tabla[i][j] = '.';
            }
        }
    }

    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            printf("%c", tabla[i][j]);
        }
        printf("\n");
    }

    return 0;
}
