/*
 * Problema 4. 
 * Escribir un programa en C que  dado un vector  de dimensión N lleve las posiciones pares a otro vectorv1 y las posiciones impares a otro vector v2
 */
 
#include <stdio.h>

#define N  9

int main(int argc, char **argv)
{
    int v[N];
    int v1[N/2+(N%2)], v2[N/2]; 
    int i;
    
    /* Inicializaremos v con constantes 1, 2, ... N */
    for(i=0;i<N;i++) {
        v[i] = i+1;
    }
    printf("v = [");
    for(i=0;i<N;i++) {
        printf("%d ",  v[i]);
    }
    printf("]\n");
    
    /* Reparto de los elementos */
    for(i=0;i<N;i++) {
        if( i%2==0 ) {
            v1[i/2] = v[i];
        }
        else {
            v2[i/2] = v[i];
        }
    }

    /* Imprimimos v1 y v2 */
    printf("v1 = [");
    for(i=0;i<N/2+(N%2);i++) {
        printf("%d ",  v1[i]);
    }
    printf("]\n");

    printf("v2 = [");
    for(i=0;i<N/2;i++) {
        printf("%d ",  v2[i]);
    }
    printf("]\n");
    
    return 0;
}
