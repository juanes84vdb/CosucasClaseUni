#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

int main()
{
    int numero;
    FILE* f =NULL;
    f = fopen("fichero.txt", "r"); 
    // leer  r,  escribir  w, añadir  a
    if (f == NULL)
    {
        printf("Error al abrir el archivo\n");
        exit(1);
    }
    for (int i = 1; i <= N; i++)
    {
        fscanf(f, "%d", &numero);
        printf("Numero %d: %d\n", i, numero);
    }
    fclose(f);

    return 0;
}
