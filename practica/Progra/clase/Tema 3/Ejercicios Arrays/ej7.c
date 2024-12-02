#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 4

int main(int argc, char *argv[])
{
    int numeros1[N][N];     // [0][0] [0][1] [0][2] [1][0] [1][1] [1][2] [2][0] [2][1] [2][2]
    int numeros4[N][N] = {0, 1, 2, 3, 4, 5, 6, 7, 8};  // {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
    int numeros2[N][M];
    int numeros3[N][N][N];
    int i,j,k;

    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            numeros1[i][j] = 1;
        }
    }

    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            printf("%d ", numeros1[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            for(k=0;k<N;k++) {
                numeros3[i][j][k] = 1;
            }
        }
    }

    return 0;
}
