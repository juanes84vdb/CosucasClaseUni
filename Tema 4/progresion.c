#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 5

// Implementar una funcion que nos diga si una serie de
// numeros es una progresion aritmetica
// Ej: 1, 3, 5, 7, 9, ...  sí lo es con d = 2

int progression_aritmetica(int n, int numeros[], int *d);

int main(int argc, char *argv[])
{
    int numeros[N];
    int i;
    int resultado, d;

    printf("Introduce %d numeros: ", N);
    for(i=0;i<N;i++) {
        scanf("%d", &numeros[i]);
    }

    resultado = progression_aritmetica(N, numeros, &d);
    if( resultado ) {
        printf("Es progresion aritmetica (d=%d)\n", d);
    }
    else {
        printf("No es progresion aritmetica");
    }

    return 0;
}

int progression_aritmetica(int n, int numeros[], int *d)
{
    int d0;
    int i;

    if( n==1 ) {
        return 0;
    }
    d0 = numeros[1] - numeros[0];
    if( n>2 ) {
        for(i=2;i<n;i++) {
            if( numeros[i]-numeros[i-1] != d0 ) {
                return 0;
            }
        }
    }
    *d = d0;
    return 1;
}

