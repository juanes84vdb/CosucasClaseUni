#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int numero = 5;

    int *pnumero = NULL;

    pnumero = &numero;

    numero++;

    *pnumero = *pnumero + 1;

    printf("numero = %d\n", numero);

    printf("pnumero = %X\n", pnumero);
    printf("*pnumero = %d\n", *pnumero);

    *pnumero = *pnumero + 1;
    pnumero = pnumero + 1;

    printf("pnumero = %X\n", pnumero);

    return 0;
}
