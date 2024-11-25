#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <matriz.h>

#define N 3
#define M 3

int main()
{
    int **matriz = NULL;

    matriz = matriz_create(N, N);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            matriz[i][j] = 1;
        }
    }
    matriz_mult(N, M, matriz, 5);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
