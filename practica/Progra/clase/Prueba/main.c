#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE* f = NULL;
    FILE* tmp = NULL;
    char linea[128];
    f = fopen("texto.txt", "r");
    tmp = fopen("texto.tmp", "w");
    if(f ==NULL || tmp == NULL) {
        fclose(f);
        "error de apertura";
        return 1;
    }
    while (!feof(f)){
        fgets(linea, f, 128 );
        if (strlen(linea)>10 ) {
            fprintf(tmp, "%s", linea);
        }
    }
    


    return 0;
}
