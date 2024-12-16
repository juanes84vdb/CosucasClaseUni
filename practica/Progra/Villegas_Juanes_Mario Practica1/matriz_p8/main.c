#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    do {
        printf("Ingresa un tama�o impar para la matriz (N): ");
        scanf("%d", &n);
    } while (n % 2 == 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1
                || i == j || i + j == n - 1) {
                printf("* ");
            }
            else if ((i > j && i < n - j) || (i >= j && i >= n-j)) {
                printf("0 ");
            }

            else {
                printf("1 ");
            }
        }
        printf("\n");
    }

    return 0;
}
