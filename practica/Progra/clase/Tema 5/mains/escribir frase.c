#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

int main()
{
    FILE *f = NULL;
    int i = 0;
    char letra, frase[128];
    f = fopen("fichero.txt", "w");
    // leer  r,  escribir  w, añadir  a
    if (f == NULL)
    {
        printf("Error al abrir el archivo\n");
        exit(1);
    }
    printf("Introduce una frase \n");
    gets(frase);
    while (frase[i] != 0)
    {
        if (frase[i] >= 'a' && frase[i] <= 'z')
            letra = frase[i] - 32;
        else
            letra = frase[i];
        fprintf(f, "%c", letra);
        i++;
    }

    fclose(f);

    return 0;
}
