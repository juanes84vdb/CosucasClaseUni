#include <stdio.h>
#include <stdlib.h>


int main()
{
    int* array = NULL;
    int n, num, max, may = 0, men = 0;

    printf("Introduce n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Error\n");
        return 1;
    }

    array = (int*)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    printf("Introduce el numero para separar: ");
    scanf("%d", &max);

    for (int i = 0; i < n; i++) {
        printf("Introduce el %d numero: ", i + 1);
        scanf("%d", &num);
        array[i] = num;
    }

    for (int i = 0; i < n / 2; i++) {
        if (array[i] > max) may++;
        else men++;
        if (array[n - 1 - i] > max) may++;
        else men++;

        num = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = num;
    }

    if (n % 2 != 0) {
        if (array[n / 2] > max) may++;
        else men++;
    }

    int* arraymay = (int*)malloc(may * sizeof(int));
    if (arraymay == NULL) {
        printf("Error \n");
        free(array);
        return 1;
    }

    int* arraymen = (int*)malloc(men * sizeof(int));
    if (arraymen == NULL) {
        printf("Error\n");
        free(array);
        free(arraymay);
        return 1;
    }


    int indiceMay = 0, indiceMen = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] > max) {
            arraymay[indiceMay++] = array[i];
        } else {
            arraymen[indiceMen++] = array[i];
        }
    }

    printf("mayores:\n");
    for (int j = 0; j < may; j++) {
        printf("%d ", arraymay[j]);
    }
    printf("\n");

    printf("menores o iguales:\n");
    for (int j = 0; j < men; j++) {
        printf("%d ", arraymen[j]);
    }
    printf("\n");

    free(array);
    free(arraymay);
    free(arraymen);

    return 0;
}
