#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 20

// Generar un array de tamaño n con los n primeros
// numeros primos

int main(int argc, char *argv[])
{
    int n;
    int i,j,k,es_primo, primo_anterior = 1;
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
        for(j=primo_anterior;;j++) {
            es_primo = 1;
            for(k=2;k<j;k++) {
                if( j%k==0 ) {
                    es_primo = 0;
                    break;
                }
            }
            if( es_primo ) {
                array[i] = j;
                primo_anterior = j+1;
                break;
            }
        }
    }

    for(i=0;i<n;i++) {
        printf("%d ", array[i]);
    }

    return 0;
}



