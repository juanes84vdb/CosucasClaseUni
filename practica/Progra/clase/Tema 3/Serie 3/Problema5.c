/*
 * Problema 5. 
 * Escribir  un  programa  en  C  lea  una  frase  de  caracteres  por  teclado  y cuente cuantos espacios aparecen en ella
 */
 
#include <stdio.h>
#include <string.h>

#define MAXTAM 256

int main(int argc, char **argv)
{
    char frase[MAXTAM];
    int i, nspaces = 0;
    
    printf("Introduzca un frase por teclado [max. %d letras]: ", MAXTAM);
    fgets(frase, MAXTAM-1, stdin);
    
    /* Si queremos contar el numero de caracteres en blanco (espacios): */
    nspaces = 0;
    i = 0;
    while(frase[i]!='\0') {
        if( frase[i]==' ' ) {
            nspaces++;
        }
        i++;
    }
    printf("El numero de espacios (caracteres) en la frase es: %d\n", nspaces);
    
    /* Si queremos contar el numero de espaios (separaciones entre palabras): */
    nspaces = 0;
    i = 0;
    while(frase[i+1]!='\0') {
        if( frase[i]==' '  && frase[i+1]!=' ' ) {    
            nspaces++;
        }
        i++;
    }
    printf("El numero de espacios entre palabras en la frase es: %d\n", nspaces);
    
    return 0;
}
