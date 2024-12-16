#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Calcula la media aritmetica de los numeros [1..max]

    param int max  El numero maximo
    return float   La media calculada
*/
float calcular_media_f(int max)
{
    int i;
    float med;

    printf("Direccion de max = %X\n", &max);
    printf("Direccion de med = %X\n", &med);

    printf("\tBegin calcular_media_f()\n");

    med = 0.0;
    for(i=1;i<=max;i++) {
        med = med + i;
    }
    med = med / max;

    printf("\tEnd calcular_media_f()\n");

    return med;
}


void calcular_media_p(int max, float *med)
{
    int i;

    *med = 0.0;
    for(i=1;i<=max;i++) {
        *med = *med + i;
    }
    *med = *med / max;
}

int main(int argc, char *argv[])
{
    int n;
    int i;
    float media;

    printf("Begin main()\n");

    printf("Direccion de n = %X\n", &n);
    printf("Direccion de media = %X\n", &media);

    printf("Introduce el valor de n: ");
    scanf("%d", &n);

    /*
    media = 0.0;
    for(i=1;i<=n;i++) {
        media = media + i;
    }
    media = media / n;
    */

    // Funcion
    media = calcular_media_f(n);
    printf("La media es %f\n", media);

    // procedimiento
    media = 0;
    calcular_media_p(n, &media);
    printf("La media es %f\n", media);

    printf("End main()\n");

    return 0;
}
