#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1000

int main()
{

    FILE* fb = NULL;
    int numero;
    int numeros[1000];
    fb = fopen("fichero.bin", "rb"); 
    if (fb == NULL)
    {
        printf("Error al abrir el archivo binario\n");
        exit(1);
    }
    for (int i = 1; i <= N; i++)
    {
        fread(&numero, sizeof(int), 1, fb);
        printf("%d\n ", numero);
    }

    fread(&numero, sizeof(int), 1000, fb);
    fclose(fb);

    return 0;
}
