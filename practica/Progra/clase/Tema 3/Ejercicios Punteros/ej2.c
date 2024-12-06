#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int numero = 5;
    int* p = NULL;

    // Variable int dinamica
    p = (int*)malloc(sizeof(int));
    if( p!=NULL ) {
        *p = 10;
        numero + *p;
        free(p);
    }

    // Array dinamico
    printf("Introduce el numero de elementos: ");
    scanf("%d", &numero);
    p = (int*)malloc(numero*sizeof(int));
    if( p!=NULL ) {

        scanf("%d", &numero);

        p[0] = 1;
        p[1] = 2;
        // ...

        free(p);
    }


    return 0;
}
