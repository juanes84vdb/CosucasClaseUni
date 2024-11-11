#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 5

// Implementar una funcion que reciba un cierto texto
// formado por palabras separadas por espacios y tabuladores
// y elimine los espacios sobrantes. Los tabuladores se
// trasforman en espacios

// Ejemplo: "Hola   mundo       que tal?"
//          "Hola mundo que tal?"

void clean_spaces(char *texto);

int main(int argc, char *argv[])
{
    char texto[256];

    printf("Introduce un texto: ");
    gets(texto);

    clean_spaces(texto);
    printf("%s\n", texto);

    return 0;
}

void clean_spaces(char *texto)
{
    int i;
    int j;

    // Transformar los tabuladores en espacios
    i = 0;
    while(texto[i]!='\0') {
        if( texto[i]=='\t' ) {
            texto[i] = ' ';
        }
        i++;
    }
    // Eliminar los espacios que sobran
    i = 0;
    while(texto[i]!='\0') {
        if( texto[i]==' ' && texto[i+1]==' ' ) {
            j = i+1;
            while(texto[j]!='\0') {
                texto[j] = texto[j+1];
                j++;
            }
        }
        else
            i++;
    }
}


