#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Realizar un programa que lea un texto por teclado
// y una palabra. A continuación ha de pasar a
// mayusculas únicamente la ocurrencia de esa
// palabra
// Ej:
//      Texto: Hola mundo que    tal? El mundo es grande. Los mundos son bonitos
//      Palabra: mundo
//      Resultado: Texto: Hola MUNDO que    tal? El MUNDO es grande. Los mundos son bonitos

int main(int argc, char *argv[])
{
    char texto[1024];
    char palabra[32];
    int i,j,k,es_palabra;

    printf("Introduce un texto: ");
    gets(texto);
    printf("Dime una palabra: ");
    gets(palabra);

    i = 0;
    while(texto[i]!='\0') {
        if( texto[i]==palabra[0] ) {
            es_palabra = 1;
            j = 0;
            while(palabra[j]!='\0') {
                if( texto[i+j]!=palabra[j] ) {
                    es_palabra = 0;
                }
                j++;
            }
            if( es_palabra ) {
                if( texto[i+j]==' ' || texto[i+j]=='.' || texto[i+j]==',' ) {
                    for(k=0;k<j;k++) {
                        texto[i+k] = texto[i+k] - 'a' + 'A';
                    }
                }
            }
        }
        i++;
    }

    printf("%s\n", texto);

    return 0;
}



