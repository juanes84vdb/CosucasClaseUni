#include <stdio.h>
#include <stdlib.h>

// Guardar en un array los siguientes valores:
// En las posiciones pares los multiplos de 2
// En las posiciones impares los multiplos de 3,
// pero al reves
//
// Ej: [2, 18, 4, 15, 6, 12, 8, 9, 10, 6, 12, 3, 14]

#define N 100

int main(int argc, char *argv[])
{
    int numeros[N];
    int i, j;

    // Posiciones pares
    j = 2;
    for(i=0;i<N;i+=2) {
       numeros[i] = j;
       j = j+2;
    }
    // Posiciones impares
    if( N%2==0 ) {
        j = 3;
        for(i=N-1;i>=0;i-=2) {
            numeros[i] = j;
            j+=3;
        }
    }
    else {
        j = 3;
        for(i=N-2;i>=0;i-=2) {
            numeros[i] = j;
            j+=3;
        }
    }

    return 0;
}
