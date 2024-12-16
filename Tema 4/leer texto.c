#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
    Realizar una función que cuente cuantas
    veces aparecen una serie de palabras en un cierto
    texto.
    El programa ha de trabajar con texto de varias lineas
    y utilizar esta funcion
*/

char** leer_lineas(int* nlineas);
char **leer_palabras(int* npalabras);
void contar_palabras(int nlineas, char **lineas, int npalabras, char **palabras);

int main(int argc, char *argv[])
{
    int nlineas = 0, npalabras = 0;
    int i;
    char **lineas = NULL;
    char **palabras = NULL;

    lineas = leer_lineas(&nlineas);

    palabras = leer_palabras(&npalabras);

    contar_palabras(nlineas, lineas, npalabras, palabras);

    free(lineas);
    free(palabras);

    return 0;
}

/**
    Pide al usuario el numero de lineas y devuelve una matriz con una frase en cada fila
    return char[][]
*/
char** leer_lineas(int* nlineas)
{
    char **lineas = NULL;
    int i;

    printf("Cuantas lineas? ");
    scanf("%d", nlineas);
    fflush(stdin);

    lineas = (char**)malloc(*nlineas*sizeof(char*));
    if( lineas!=NULL ) {
        for(i=0;i<*nlineas;i++) {
            lineas[i] = (char*)malloc(256);
            gets(lineas[i]);
        }
    }
    return lineas;
}

/**
    Pide al usuario el una serie de palabras
    return char[][]
*/
char **leer_palabras(int* npalabras)
{
    char **palabras = NULL;
    int i;

    printf("Cuantas palabras? ");
    scanf("%d", npalabras);
    fflush(stdin);

    palabras = (char**)malloc(*npalabras*sizeof(char*));
    if( palabras!=NULL ) {
        for(i=0;i<*npalabras;i++) {
            palabras[i] = (char*)malloc(64);
            gets(palabras[i]);
        }
    }
    return palabras;
}

void contar_palabras(int nlineas, char **lineas, int npalabras, char **palabras)
{
    int i,j;
    char *w = NULL;
    int *count;

    count = malloc(npalabras*sizeof(int));
    if( count==NULL )
        return;
    for(j=0;j<npalabras;j++) {
        count[j] = 0;
    }

    for(i=0;i<nlineas;i++) {
        w = strtok(lineas[i], " \t,;.:{}[]()!¡¿?'\"");
        while( w!=NULL ) {
            for(j=0;j<npalabras;j++) {
                if( strcmp(w, palabras[j])==0 ) {
                    count[j]++;
                    break;
                }
            }
            w = strtok(NULL, " \t,;.:{}[]()!¡¿?'\"");
        }
    }

    for(j=0;j<npalabras;j++) {
        printf("%s : %d\n", palabras[j], count[j]);
    }
}
