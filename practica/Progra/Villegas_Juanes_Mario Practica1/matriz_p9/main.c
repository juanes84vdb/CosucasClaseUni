#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;

    printf("introduce el tamaño: ");
    scanf("%d", &n);

    int cantidadPrimos = n * n;
    int primos[cantidadPrimos];
    int num = 2;
    int index = 0;

    while (index < cantidadPrimos) {
        int esPrimo = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                esPrimo = 0;
                break;
            }
        }
        if (esPrimo) {
            primos[index] = num;
            index++;
        }
        num++;
    }

    int matriz[n][n];

    index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = primos[index++];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
