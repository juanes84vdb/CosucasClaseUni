/*
 * Problema 1. 
 * Escribir un programa en C que pida dos números a y b al usuario por teclado y a continuación imprima las potencias al cuadrado comprendidas entre ellos:
 * a^2, (a+1)^2, ... b^2
 */
 
#include <stdio.h>

int main(int argc, char **argv)
{
    int a,b;
    int n;
    
    /* Lectura numeros a y b. Si no son correctos se sale del programa */
	printf("Introduzca el numero a: ");
    scanf("%d", &a);    
	printf("Introduzca el numero b: ");
    scanf("%d", &b);
    if( a>b ) {
        printf("Error al introducir los datos");
        return 1;
    }
    
    /* Imprimir las potencias */
    for(n=a;n<=b;n++) {
        printf("%d^2=%d ", n, n*n);
    }
    
	return 0;
}
