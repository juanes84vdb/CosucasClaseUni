#include <stdio.h>
#include <stdlib.h>

#define N 10
#define M 30

int main(int argc, char *argv[])
{
    char tabla[N][M];
    int i,j;

    for(i=0;i<N;i++) {
        for(j=0;j<M;j++) {
            if( i==N/2 ) {
                tabla[i][j] = 'I';
            }
            else if( j==M/3 ) {
                tabla[i][j] = 'I';
            }
            else if( i==N/2-1 || i==N/2+1 ) {
                tabla[i][j] = 'O';
            }
            else if( j==M/3-1 || j==M/3+1 ) {
                tabla[i][j] = 'O';
            }
            else {
               tabla[i][j] = '.';
            }
        }
    }

    for(i=0;i<N;i++) {
        for(j=0;j<M;j++) {
            printf("%c", tabla[i][j]);
        }
        printf("\n");
    }

    return 0;
}
