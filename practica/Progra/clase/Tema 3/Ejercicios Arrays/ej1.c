#include <stdio.h>
#include <stdlib.h>

// Guardar en un array los numeros del 20 al 1
// e imprimirlos por pantalla

int main(int argc, char *argv[])
{
    int i, j;
    int numeros[20];

    j = 20;
    for(i=0;i<20;i++) {
        numeros[i] = j;
        j--;
    }

    /*
    for(i=0;i<20;i++) {
        numeros[19-i] = j + 1;
    }
    */

    for(i=0;i<20;i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
