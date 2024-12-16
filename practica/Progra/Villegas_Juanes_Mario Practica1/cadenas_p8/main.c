#include <stdio.h>
#include <stdlib.h>

#define N 200
int main() {
    char texto[N];
    char resultado[N];
    int j = 0;

    printf("escribe el texto: ");
    gets(texto);

    for (int i = 0; texto[i] != '\0'; i++) {
        char c = texto[i];

        if (isalpha(c)) {
            c = tolower(c);
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                resultado[j++] = texto[i];
            }
        } else if (isdigit(c)) {
            resultado[j++] = c;
        }
    }

    resultado[j] = '\0';

    printf("%s ", resultado);

    return 0;
}
