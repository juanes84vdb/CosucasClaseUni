#include <stdlib.h>
int **matriz_create(int N, int M)
{
    int **matriz = (int **)malloc(N * sizeof(int *));
    
    if (matriz != NULL)
    {
        for (int i = 0; i < N; i++)
        {
            matriz[i] = (int *)malloc(M * sizeof(int));
            if (matriz[i] != NULL)
            {
                for (int j = 0; j < M; j++)
                {
                    matriz[i][j] = 0;
                }
            }
        }
    }
    return matriz;
}

void matriz_mult(int N, int M, int **matriz, int numero)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            matriz[i][j] *= numero;
        }
    }
}

int **matriz_suma(int N, int M, int **matriz1, int **matriz2)
{
    int **suma = matriz_create(N, M);

    if (suma != NULL)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                suma[i][j] = matriz1[i][j] + matriz2[i][j];
            }
        }
    }
    return suma;
}