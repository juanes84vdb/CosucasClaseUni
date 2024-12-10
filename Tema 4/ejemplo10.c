#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 5

// Implementar una funcion o procedimiento que:
// dado un array de numeros enteros, genere dos
// arrays nuevos: uno con los numeros mayores que 10
// y otro con los numeros menores que 10
//  ej: [1, 11, 2, 5, 13]  ->  [1,2,5] y [11,13]

void genera_arrays(int nnumeros, int numeros[], int* nn1, int** n1, int* nn2,int** n2, int *error);

int main(int argc, char *argv[])
{
    int datos[N];
    int i;
    int n1 = 0, n2 = 0;
    int *datos1 = NULL, *datos2 = NULL;
    int error = 0;

    printf("Introduce los numeros: ");
    for(i=0;i<N;i++) {
        scanf("%d", &datos[i]);
    }

    genera_arrays(N, datos, &n1, &datos1, &n2, &datos2, &error);
    if( error ) {
        printf("Ha habido un error");
        return 1;
    }

    for(i=0;i<n1;i++) {
        printf("%d ", datos1[i]);
    }
    printf("\n");

    for(i=0;i<n2;i++) {
        printf("%d ", datos2[i]);
    }
    printf("\n");

    free(datos1);
    free(datos2);

    return 0;
}

void genera_arrays(int nnumeros, int numeros[], int* nn1, int** n1, int* nn2,int** n2, int *error)
{
    int gt10 = 0;
    int lt10 = 0;
    int i;
    int i1, i2;

    // Contar elementos mayores y menores que 10
    for(i=0;i<nnumeros;i++) {
        if( numeros[i]>10 ) {
            gt10++;
        }
        else if( numeros[i]<10 ) {
            lt10++;
        }
    }

    // Crear los arrays
    if( gt10>0 ) {
        *n1 = (int*)malloc(gt10*sizeof(int));
        if( *n1==NULL ) {
            *error = 1;
        }
        *nn1 = gt10;
    }
    if( lt10>0 ) {
        *n2 = (int*)malloc(lt10*sizeof(int));
        if( *n2==NULL ) {
            *error = 1;
        }
        *nn2 = lt10;
    }

    if( *error == 0 ) {
        // Rellenar los arrays
        i1 = 0;
        i2 = 0;
        for(i=0;i<nnumeros;i++) {
            if( numeros[i]>10 ) {
                (*n1)[i1++] = numeros[i];
            }
            else if( numeros[i]<10 ) {
                (*n2)[i2++] = numeros[i];
            }
        }
    }
}


