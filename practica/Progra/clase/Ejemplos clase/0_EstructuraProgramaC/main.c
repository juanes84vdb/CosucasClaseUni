/*
    Sección de directivas para el preprocesador. Suelen aparecer aquí inclusiones de ficheros de cabecera
    (archivos .h) que contienen definiciones de constantes, declaraciones de funciones, etc...
*/
#include <stdio.h>
#include <stdlib.h>

// La directiva "define" permite definir símbolos (expresiones que luego serán sustituidas por el preprocesador
// en el código antes de compilar). Las usaremos como un modo de definir constantes
#define N 100

/*
   Si el programa va a generar un ejecutable, debe aparecer una vez la función main. Es el punto de entrada al programa
   Contiene el algoritmo principal. Debería devolver un valor entero (int)
*/
int main(int argc, char *argv[])
{
    // Al comenzar una función deberían aparecer las declaraciones de variables que se vayan a necesitar en esa función
    int n;
    float x,y;

    // Líneas de código (el algoritmo principal)
    printf("Hello world!\n");

    // Finalización de la función. Es usual que termine devolviendo un valor adecuado al tipo
    return 0;
}
