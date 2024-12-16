#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1000

int main()
{
    FILE* f =NULL;
    f = fopen("fichero.txt", "w"); 
    // leer  r,  escribir  w, añadir  a
    if (f == NULL)
    {
        printf("Error al abrir el archivo\n");
        exit(1);
    }
    for (int i = 1; i <= N; i++)
    {
        fprintf(f, "%d \n", i);
        // fflush(f);
        // system("pause");
    }
    fclose(f);

    //estructuta binaria
    FILE* fb = NULL;
    fb = fopen("fichero.bin", "wb"); 
    if (fb == NULL)
    {
        printf("Error al abrir el archivo binario\n");
        exit(1);
    }
    for (int i = 1; i <= N; i++)
    {
        fwrite(&i, sizeof(int), 1, fb);
    }
    fclose(fb);

    return 0;
}
