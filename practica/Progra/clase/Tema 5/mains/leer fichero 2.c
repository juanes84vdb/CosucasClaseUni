#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

int main()
{
    FILE *f = NULL;
    char linea[128];
    f = fopen("fichero.txt", "r");
    // leer  r,  escribir  w, añadir  a
    if (f == NULL)
    {
        printf("Error al abrir el archivo\n");
        exit(1);
    }
    fgets(linea, 128, f);
    while (!feof(f))
    {
        printf("%s", linea);
        fgets(linea, 128, f);
    }

    fclose(f);

    return 0;
}
