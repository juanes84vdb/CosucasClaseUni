/*
 * Problema 3. 
 * Escribir un programa en C que imprima por pantalla todos los números  de cuatro cifras capicúa (de la forma ABBA o AAAA) comprendidos entre 0001 y 9999 
 */
 
#include <stdio.h>

#define NSYMBOLS  10

int main(int argc, char **argv)
{
    char symbols[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };      /* Seria facil cambiar a otros capicuas. Basta con cambiar NSYMBOLS y el array symbols */
    char ch0, ch1;
    int   i, j;
    
    /* Dada la simetria solo necesito dos bucles */
    for(i=0;i<NSYMBOLS;i++) {
        for(j=0;j<NSYMBOLS;j++) {
            ch0 = symbols[i];
            ch1 = symbols[j];
            printf("%c%c%c%c\n", ch0, ch1, ch1, ch0);
        }
    }

    return 0;
}
