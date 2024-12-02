#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Realizar un programa que genere un array (N)
// con las potencias sucesivas de los N primeros
// numeros
// Ej: Si N = 5
// array = [1^1, 2^2, 3^3, 4^4, 5^5]


int main(int argc, char *argv[])
{
    int n;
    int i,j,potencia;
    int* array = NULL;

    printf("Introduce n: ");
    scanf("%d", &n);
    if( n<=0 ) {
        printf("Error\n");
        return 1;
    }

    array = (int*)malloc(n*sizeof(int));
    if( array==NULL ) {
        printf("Error\n");
        return 1;
    }

    for(i=0;i<n;i++) {
        potencia = 1;
        for(j=1;j<=(i+1);j++) {
            potencia = potencia *(i+1);
        }
        array[i] = potencia;
    }

    for(i=0;i<n;i++) {
        printf("%d ", array[i]);
    }

    free(array);

    return 0;
}



