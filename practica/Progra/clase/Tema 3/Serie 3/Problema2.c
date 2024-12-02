/*
 * Problema 2. 
 * Escribir  un  programa  en  C  que  busque  en  un  array  de  N  números  enteros,  un  número  introducido  por  el  usuario  por  teclado.  La  búsqueda  debe 
 *  terminar cuando se encuentre la primera coincidencia..
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100


int main(int argc, char **argv)
{
    int numeros[N];
    int i, n;
    time_t t;
    
    /* Generacion del array. Elegimos (no es obligatorio) una generación aleatoria. */
	srand((unsigned) time(&t));
    for(i=0;i<N;i++) {
        numeros[i] = rand() % N;    /* Numeros enre 0 y N-1 */
    }
    
    /* Imprimir el array generado (opcional, es para ver mejor el numero a buscar) */
    for(i=0;i<N;i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    
    printf("Número a buscar: ");
    scanf("%d", &n);
    
    i = 0;
    while( numeros[i]!=n && i<=N-1 ) {
        i++;
    }
    if( i<N ) {
        printf("El numero %d está en la posición %d del array\n", n, i+1);
    }
    else {
        printf("El numero %d no se encuentra en el array\n", n);
    }
    
    
	return 0;
}
