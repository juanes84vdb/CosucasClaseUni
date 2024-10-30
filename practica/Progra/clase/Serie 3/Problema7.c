/*
 * Problema 7. 
 * Escribir un programa en C lea una frase de caracteres por teclado y la  invierta
 */
 
#include <stdio.h>
#include <string.h>

#define MAXTAM 256

int main(int argc, char **argv)
{
    char frase[MAXTAM];
    char tmp;
    int i, n;
    
    printf("Introduzca un frase por teclado [max. %d letras]: ", MAXTAM);
    fgets(frase, MAXTAM-1, stdin);
    
    n = strlen(frase);
    for(i=0;i< n/2;i++) {
        tmp = frase[i];
        frase[i] = frase[n-i-1];
        frase[n-i-1] = tmp;
    }
    
    printf("%s\n", frase);
    
    return 0;
}
