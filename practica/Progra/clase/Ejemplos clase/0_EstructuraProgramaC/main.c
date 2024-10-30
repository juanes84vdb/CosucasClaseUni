/*
    Secci�n de directivas para el preprocesador. Suelen aparecer aqu� inclusiones de ficheros de cabecera
    (archivos .h) que contienen definiciones de constantes, declaraciones de funciones, etc...
*/
#include <stdio.h>
#include <stdlib.h>

// La directiva "define" permite definir s�mbolos (expresiones que luego ser�n sustituidas por el preprocesador
// en el c�digo antes de compilar). Las usaremos como un modo de definir constantes
#define N 100

/*
   Si el programa va a generar un ejecutable, debe aparecer una vez la funci�n main. Es el punto de entrada al programa
   Contiene el algoritmo principal. Deber�a devolver un valor entero (int)
*/
int main(int argc, char *argv[])
{
    // Al comenzar una funci�n deber�an aparecer las declaraciones de variables que se vayan a necesitar en esa funci�n
    int n;
    float x,y;

    // L�neas de c�digo (el algoritmo principal)
    printf("Hello world!\n");

    // Finalizaci�n de la funci�n. Es usual que termine devolviendo un valor adecuado al tipo
    return 0;
}
