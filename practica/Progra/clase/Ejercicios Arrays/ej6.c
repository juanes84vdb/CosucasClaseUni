#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 128

int main(int argc, char *argv[])
{
    char frase1[N];
    unsigned char frase2[N];

    frase1[0] = 'H';
    frase1[1] = 'o';
    frase1[2] = 'l';
    frase1[3] = 'a';
    frase1[4] = '\0';   // o frase1[4] = 0;

    printf("%s\n", frase1);

    gets(frase1);

    printf("%s\n", frase1);

    printf("Letras: %d\n", strlen(frase1));

    strcpy(frase1, "Nueva frase");
    strcat(frase1, " y fin!");

    puts(frase1);

    gets(frase1);
    if( strcmp(frase1, "hola")==0 ) {
        printf("Es igual!\n");
    }

    return 0;
}
