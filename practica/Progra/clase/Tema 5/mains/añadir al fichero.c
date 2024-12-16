#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

int main()
{
    FILE *f = NULL;
    int i = 0;
    char linea[128];
    f = fopen("fichero.txt", "a");
    // leer  r,  escribir  w, añadir  a
    if (f == NULL)
    {
        printf("Error al abrir el archivo\n");
        exit(1);
    }
    gets(linea);
    do
    {
        fprintf(f, "%s\n", linea);
        gets(linea);
        i++;
    } while (strcmp(linea, "__FIN__") != 0);

    fclose(f);

    return 0;
}
