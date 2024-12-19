#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** string_matrix(char* origen, int n, int* error) {
    // Validar entradas
    if (!origen || n <= 0 || !error) {
        if (error) {
            *error = 1; // Error: Entrada inválida
        }
        return NULL;
    }

    int length = strlen(origen);
    if (length == 0) {
        *error = 2; // Error: Cadena vacía
        return NULL;
    }

    // Reservar memoria para la matriz
    char** matriz = (char**)malloc(n * sizeof(char*));
    if (!matriz) {
        *error = 3; // Error: No se pudo asignar memoria para la matriz
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        matriz[i] = (char*)malloc((length + 1) * sizeof(char));
        if (!matriz[i]) {
            *error = 4; // Error: No se pudo asignar memoria para una fila
            // Liberar memoria previamente asignada
            for (int j = 0; j < i; j++) {
                free(matriz[j]);
            }
            free(matriz);
            return NULL;
        }
        strcpy(matriz[i], origen); // Copiar la cadena origen en la fila actual
    }

    *error = 0; // Sin errores
    return matriz;
}

// Función de prueba
int main() {
    int error;
    char origen[] = "Hola, mundo!";
    int n = 5;

    char** matriz = string_matrix(origen, n, &error);

    if (error != 0) {
        printf("Error al crear la matriz: %d\n", error);
    } else {
        printf("Matriz creada:\n");
        for (int i = 0; i < n; i++) {
            printf("%s\n", matriz[i]);
            free(matriz[i]); // Liberar cada fila
        }
        free(matriz); // Liberar la matriz
    }

    return 0;
}
