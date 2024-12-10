#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 10

// Ejercicio 4 de matrices

int main(int argc, char *argv[])
{
    char matriz[N][N];
    char texto[N+1];
    int i,j;
    char ch;

    printf("Introduce un texto: ");
    gets(texto);

    for(i=0;i<N;i++) {
        matriz[i][i] = texto[i];
        if( matriz[i][i]!=' ' ) {
            // Generar parte derecha
            ch = matriz[i][i];
            for(j=i+1;j<N;j++) {
                ch++;
                if( ch=='z'+1 ) ch = 'a';
                matriz[i][j] = ch;
            }
            // Generar parte izquierda
            ch = matriz[i][i];
            for(j=i-1;j>=0;j--) {
                ch--;
                if( ch=='a'-1 ) ch = 'z';
                matriz[i][j] = ch;
            }
        }
        else {
            for(j=0;j<N;j++) {
                matriz[i][j] = '.';
            }
        }
    }

    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}



