#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Realizar una funcion a la que le pasemos un
    texto y cuente cuantas vocales hay en el
*/

int contar_vocales(char texto[])
{
    int i;
    int n_vocales;

    n_vocales = 0;
    i = 0;
    while(texto[i]!='\0') {
        if( texto[i]=='a' || texto[i]=='e' || texto[i]=='i'
           || texto[i]=='o' || texto[i]=='u' || texto[i]=='A'
           || texto[i]=='E' || texto[i]=='I' || texto[i]=='O'
           || texto[i]=='U'
        )
        {
            n_vocales++;
        }
        i++;
    }

    return n_vocales;
}


int main(int argc, char *argv[])
{
    char texto[128];

    printf("Introduce un texto: ");
    gets(texto);

    printf("Hay %d vocales\n", contar_vocales(texto));

    return 0;
}
