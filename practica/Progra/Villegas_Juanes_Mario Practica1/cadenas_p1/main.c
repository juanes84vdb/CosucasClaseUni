#include <stdio.h>
#include <stdlib.h>

int main() {
    char texto[100];
    int inicioPalabra = 1;

    printf("introduce una frase: ");
    gets(texto);

    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == ' ' || texto[i] == '\t' || texto[i] == '\n'
            || texto[i] == ',' || texto[i] == '.' || texto[i] == '\?'
            || texto[i] == '!') {
            inicioPalabra = 1;
        } else if (inicioPalabra) {
            if (texto[i] >= 'a' && texto[i] <= 'z') {
                texto[i] = texto[i] - 32;
            }
            inicioPalabra = 0;
        }
    }

    printf("%s ", texto);

    return 0;
}
