#include <stdio.h>
#include <stdlib.h>

// Guardar en un array los numeros del 1 al 100
// y calcular la suma de los multiplos de 5 e
// imprimirla por pantalla

#define N 100

int main(int argc, char *argv[])
{
    int numeros[N];
    int i;
    int suma;

    for(i=0;i<N;i++) {
        numeros[i] = i+1;
    }

    suma = 0;
    for(i=0;i<N;i++) {
        if( numeros[i]%5==0 ) {
            suma = suma + numeros[i];
        }
    }

    printf("La suma es %d\n", suma);

    return 0;
}
