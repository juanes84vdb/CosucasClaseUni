#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 2

int main()
{
    char nombre[N][120];
    char apellidos[N][125];
    int years[N];

    for (int i = 0; i < N; i++)
    {
        printf("Introduce el nombre apellidos y año de nacimiento de la persona %d: \n", i + 1);
        printf("Nombre: ");
        gets(nombre[i]);
        printf("Apellidos: ");
        gets(apellidos[i]);
        printf("año de nacimineto: ");
        scanf("%d", &years[i]);
        fflush(stdin);
    }
    for (int i = 0; i < N; i++)
    {
        printf("La edad de %s %s es de %d: \n", nombre[i], apellidos[i], 2024 - years[i]);
    }

    return 0;
}
