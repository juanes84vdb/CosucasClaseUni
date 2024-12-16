#include <stdio.h>
#include <stdlib.h>

int main() {
    char texto[500];
    char palabra[50];
    char etiqueta[50];
    char resultado[1000];
    int i = 0, j = 0;

    printf("escribe un texto: ");
    gets(texto);

    printf("introduce la palabra a etiquetada: ");
    gets(palabra);

    printf("introduce la etiqueta: ");
    gets(etiqueta);

    int lenPalabra = strlen(palabra);
    int lenEtiquetaInicio = strlen(etiqueta) + 2;
    int lenEtiquetaFin = strlen(etiqueta) + 3;

    while (texto[i] != '\0') {
        if (strncmp(&texto[i], palabra, lenPalabra) == 0 &&
            (texto[i + lenPalabra] == ' ' || texto[i + lenPalabra] == '\0'
             || texto[i + lenPalabra] == '.' || texto[i + lenPalabra] == ','
             || texto[i + lenPalabra] == '\n')
            &&(i == 0 || texto[i - 1] == ' ' || texto[i - 1] == '.'
            || texto[i - 1] == ',')) {

            sprintf(&resultado[j], "<%s>", etiqueta);
            j += lenEtiquetaInicio;

            strncpy(&resultado[j], palabra, lenPalabra);
            j += lenPalabra;

            sprintf(&resultado[j], "</%s>", etiqueta);
            j += lenEtiquetaFin;

            i += lenPalabra;
        } else {
            resultado[j++] = texto[i++];
        }
    }

    resultado[j] = '\0';


    printf("%s ", resultado);

    return 0;
}

