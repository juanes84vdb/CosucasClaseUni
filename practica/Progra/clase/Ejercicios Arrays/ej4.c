#include <stdio.h>
#include <stdlib.h>

// Guardar en un array los siguientes valores:
// En cada posicion debe ir la suma de los elementos
// anteriores (excepto el primeros que vale 1)

// [1, 1, 2, 4, 8, 16, ...]

#define N 100

int main(int argc, char *argv[])
{
    int numeros[N];
    int i, j;
    int suma;

    numeros[0] = 1;
    for(i=1; i<N; i++) {
        suma = 0;
        for(j=0;j<=i-1;j++) {
            suma = suma + numeros[j];
        }
        numeros[i] = suma;
    }

    for(i=0; i<N; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
