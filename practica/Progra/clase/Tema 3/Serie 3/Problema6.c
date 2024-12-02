/*
 * Problema 6. 
 * Escribir  un  programa  en  C  lea  una  frase  de  caracteres  por  teclado  y  pase a mayúsculas todas las letras
 */
 
#include <stdio.h>
#include <string.h>

#define MAXTAM 256

int main(int argc, char **argv)
{
    char frase[MAXTAM];
    int i;
    
    printf("Introduzca un frase por teclado [max. %d letras]: ", MAXTAM);
    fgets(frase, MAXTAM-1, stdin);
    
    i = 0;
    while(frase[i]) {
        if( frase[i]>='a' && frase[i]<='z' ) {
            frase[i] += 'A'-'a';
        }
        i++;
    }
    
    printf("%s\n", frase);
    
    return 0;
}
