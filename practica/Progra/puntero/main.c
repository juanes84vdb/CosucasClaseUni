#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // int numero = NULL;
    // int *p = NULL;

    int numeros[10];
    int* pnumeros = NULL;
    int i;

    pnumeros = &numeros[0];
    
    for (i = 0; i < 10; i++){
        numeros[i] = i + 1;
    }

    for (i = 0; i < 10; i++){
        pnumeros[i] = i + 1;
    }

    for (i = 0; i < 10; i++){
        * (pnumeros+i) = i + 1;
    }

      for (i = 0; i < 10; i++){
        * (numeros+i) = i + 1;
    }

    /*  variable int dinamica
        p = (int*)malloc(sizeof(int));
        if( p!= NULL){
            *p=10;
            numero +*p;
            free(p);
        }
    */

/*
    printf("introduce el numero del array");
    scanf("%d", &numero);
    p = (int *)malloc(numero * sizeof(int));
    if (p != NULL)
    {
        p[0] = 10;
        p[1] = 20;
        free(p);
    }
*/

    /*
    int numero = 4;
    int *pnumero = NULL;

    pnumero= &numero;

    numero++;

    *pnumero = *pnumero++;

    printf("numero = %d\n", numero);
    */

    return 0;
}
