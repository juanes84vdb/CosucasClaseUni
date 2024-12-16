#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Realizar una funcion y un procedimiento
    que invierta una cadena de caracteres
*/

void invierte_texto(char *texto);
char* texto_invertido_f(char *texto);

int main(int argc, char *argv[])
{
    char texto[256];
    char *tmp = NULL;

    printf("Introduce una frase: ");
    gets(texto);

    tmp = texto_invertido_f(texto);
    printf("Texto original: %s\n", texto);
    printf("Texto invertido: %s\n", tmp);

    invierte_texto(texto);
    printf("Texto original: %s\n", texto);
    printf("Texto invertido: %s\n", texto);


    return 0;
}

/**
   Procedimiento que invierte un texto
   param string texto
*/
void invierte_texto(char *texto)
{
    char tmp;
    int i,j,n;

    n = strlen(texto);
    j = n-1;
    for(i=0;i<n/2;i++) {
        tmp = texto[i];
        texto[i] = texto[j];
        texto[j] = tmp;
        j--;
    }
}

/**
   Procedimiento que devuelve un texto al reves
   param string texto
   return string
*/
char* texto_invertido_f(char *texto)
{
    char *copia = NULL;

    copia = strdup(texto);

    invierte_texto(copia);

    return copia;
}
