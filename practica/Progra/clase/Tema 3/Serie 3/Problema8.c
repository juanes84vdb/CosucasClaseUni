/*
 * Problema 8. 
 * Escribir  un  programa  en  C  lea  una  frase  de  caracteres  por  teclado y  elimine  los espacios en  blanco entre palabras adicionales (solo debe dejar uno)
 */
 
#include <stdio.h>
#include <string.h>

#define MAXTAM 256

int main(int argc, char **argv)
{
    char frase[MAXTAM];
    char tmp;
    int i, j;
    
    printf("Introduzca un frase por teclado [max. %d letras]: ", MAXTAM);
    fgets(frase, MAXTAM-1, stdin);
    
    i = 0;
    while(frase[i]) {
        if( frase[i]==' ' && frase[i+1]==' ') {
            j = i;
            while(frase[j]) {
                frase[j] = frase[j+1];
                j++;
            }            
        }
        else 
            i++;
    }
    
    printf("%s\n", frase);
    
    return 0;
}
