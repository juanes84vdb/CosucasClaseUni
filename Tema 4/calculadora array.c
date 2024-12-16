#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
    Realizar dos modulos: uno que sume los elementos de un array
    y otro que los multiplique por un numero
*/

int sumar_elementos_array(int n, int numeros[]);

void mult_elementos_array(int n, int numeros[], int cantidad);


int main(int argc, char *argv[])
{
    int numeros[5] = {1, 2, 3, 4, 5};
    int i;

    printf("La suma es %d\n", sumar_elementos_array(5,numeros));

    mult_elementos_array(5,numeros,2);
    for(i=0;i<5;i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}

int sumar_elementos_array(int n, int numeros[])
{
    int resultado = 0;
    int i;

    for(i=0;i<n;i++) {
        resultado = resultado + numeros[i];
        // resultado += numeros[i];
    }

    return resultado;
}

void mult_elementos_array(int n, int numeros[], int cantidad)
{
    int i;

    for(i=0;i<n;i++) {
        numeros[i] = numeros[i] * cantidad;
    }
}
