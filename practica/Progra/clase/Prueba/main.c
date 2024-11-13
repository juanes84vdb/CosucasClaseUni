#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 10

int main(int argc, char *argv[])
{
    char matriz[N][N];
    char texto[N + 1];

    printf("Ingrese el texto: ");
    gets(texto);

    for (int i = 0; i <= N; i++)
    {
        matriz[i][i] = texto[i];
        for (int j = i + 1; j <= N; j++)
        {
            matriz[i][j] = matriz[i][j - 1] + 1;
            if (matriz[i][j] == 123)
                matriz[i][j] = 97;
            for (int j = i - 1; j >= 0; j--)
            {
                matriz[i][j] = matriz[i][j + 1] - 1;
                if (matriz[i][j] == 96)
                    matriz[i][j] = 122;
            }
        }
    }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                printf("%c ", matriz[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
