#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Realizar un programa que calcule la suma y la multiplicacion
    de N numeros que se guardan en un array
*/

#define N 5

int calcular_suma(int numeros[])
{
    int resultado;
    int i;

    resultado = 0;
    for(i=0;i<N;i++) {
        resultado = resultado + numeros[i];
    }

    return resultado;
}

int calcular_multiplicacion(int numeros[])
{
    int resultado;
    int i;

    // Multiplicacion
    resultado = 1;
    for(i=0;i<N;i++) {
        resultado = resultado * numeros[i];
    }

    return resultado;
}

int main(int argc, char *argv[])
{
    int numeros[N];
    int resultado;
    int i;

    printf("Introduce N numeros: ");
    for(i=0;i<N;i++) {
        scanf("%d", &numeros[i]);
    }

    resultado = calcular_suma(numeros);
    printf("La suma es: %d\n", resultado);

    resultado = calcular_multiplicacion(numeros);
    printf("La multiplicacion es: %d\n", resultado);

    return 0;
}

