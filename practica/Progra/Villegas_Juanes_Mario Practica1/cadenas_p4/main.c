#include <stdio.h>
#include <stdlib.h>

#define N 200

int main() {
    char texto[N];
    char palabra[50];
    char resultado[N];
    int i = 0, j = 0, k, lenPalabra;


    printf("escribe un texto: ");
    gets(texto);

    printf("escribe la palabra a eliminar: ");
    gets(palabra);

    lenPalabra = strlen(palabra);
    resultado[0] = '\0';

    while (texto[i] != '\0') {

        if (strncmp(&texto[i], palabra, lenPalabra) == 0 &&
            (texto[i + lenPalabra] == ' ' || texto[i + lenPalabra] == '\0'
             || texto[i + lenPalabra] == '.' || texto[i + lenPalabra] == ','
             || texto[i + lenPalabra] == '\n')
            &&(i == 0 || texto[i - 1] == ' ' || texto[i - 1] == '.'
            || texto[i - 1] == ',')) {

            i += lenPalabra;

            while (texto[i] == ' ') {
                i++;
            }
        } else {
            resultado[j++] = texto[i++];
        }
    }

    resultado[j] = '\0';

    printf("%s ", resultado);

    return 0;
}
