#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;

    do {
        printf("escribe un numero impar: ");
        scanf("%d", &n);
    } while (n % 2 == 0);

    char matriz[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= n / 2) {

                if (j >= n / 2 - i && j <= n / 2 + i) {
                    matriz[i][j] = '1';
                } else {
                    matriz[i][j] = '*';
                }
            } else {
                if (j == n / 2) {
                    matriz[i][j] = '1';
                } else {
                    matriz[i][j] = '*';
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
