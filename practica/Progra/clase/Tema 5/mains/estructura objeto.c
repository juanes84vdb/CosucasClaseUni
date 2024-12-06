#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 2

struct persona
{
   char nombre[120];
   char apellidos[125];
   int years;
};

typedef struct persona persona_t;

/*
typedef struct {
    char nombre[120];
    char apellidos[125];
    int years;
} persona_t;
*/

int main()
{
    // persona_t datos[N];
    struct persona datos[N];

    for (int i = 0; i < N; i++)
    {
        printf("Introduce el nombre apellidos y año de nacimiento de la persona %d: \n", i + 1);
        printf("Nombre: ");
        gets(datos[i].nombre);
        printf("Apellidos: ");
        gets(datos[i].apellidos);
        printf("Año de nacimineto: ");
        scanf("%d", &datos[i].years);
        fflush(stdin);
    }
    for (int i = 0; i < N; i++)
    {
        printf("La edad de %s %s es de %d: \n", datos[i].nombre
        , datos[i].apellidos, 2024 - datos[i].years);
    }

    return 0;
}
