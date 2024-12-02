#include <stdio.h>
#include <stdlib.h>

// Invertir el orden de un array introducido por teclado

#define N 10

int main(int argc, char *argv[])
{
    int numeros[N];
    int numeros_aux[N];
    int tmp;
    int i, j;

    for(i=0;i<N;i++) {
        scanf("%d", &numeros[i]);
    }

    // Forma 1: Uso de una variable auxiliar
    j = N-1;
    for(i=0;i<N/2;i++) {
        tmp = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = tmp;
        j--;
    }

    // Forma 2: Utilizar un array auxiliar
    j = 0;
    for(i=N-1;i>=0;i--) {
        numeros_aux[j] = numeros[i];
        j++;
    }

    // Imprimir el array
    for(i=0;i<N;i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
