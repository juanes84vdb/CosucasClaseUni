#include <stdio.h>

// Secuencias ANSI para los colores
#define VERDE   "\x1b[42m"
#define AMARILLO "\x1b[43m"
#define ROJO    "\x1b[41m"
#define RESET   "\x1b[0m"

int main() {
    int i, j;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 24; j++) {
            if (j < 10)
                printf(VERDE "  " RESET);
            else
                printf(AMARILLO "  " RESET);
        }
        printf("\n");
    }

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 24; j++) {
            if (j < 10)
                printf(VERDE "  " RESET);
            else
                printf(ROJO "  " RESET);
        }
        printf("\n");
    }

    return 0;
}
