#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
    Realizar un programa calculadora que permita hacer
    varias operaciones. Funcionara así:

    calculadora.exe suma 2 6
    calculadora.exe sumaN 1 2 3 4 5 6 7
    calculadora.exe resta 20 5
    calculadora.exe multiplica 20 5
    calculadora.exe divide 20 5
    calculadora.exe mediaA 1 2 3 4 5 6 7
    calculadora.exe mediaG 1 2 3 4 5 6 7
    argv[0]         argv[1] argv[2] ...
*/

#define N 5

void exec_suma(int argc, char *argv[]);
void exec_sumaN(int argc, char *argv[]);
void exec_resta(int argc, char *argv[]);
void exec_divide(int argc, char *argv[]);
void exec_multiplica(int argc, char *argv[]);
void exec_mediaA(int argc, char *argv[]);
void exec_mediaG(int argc, char *argv[]);

int math_sumar(int n, int numeros[]);
int math_restar(int n, int numeros[]);
int math_multiplicar(int n, int numeros[]);

int main(int argc, char *argv[])
{
    // Procesar la linea de comandos
    if( strcmp(argv[1],"suma")==0 ) {
        exec_suma(argc, argv);
    }
    else if( strcmp(argv[1],"sumaN")==0 ) {
        exec_sumaN(argc, argv);
    }
    else if( strcmp(argv[1],"resta")==0 ) {
        exec_resta(argc, argv);
    }
    else if( strcmp(argv[1],"multiplica")==0 ) {
        exec_multiplica(argc, argv);
    }
    else if( strcmp(argv[1],"divide")==0 ) {
        exec_divide(argc, argv);
    }
    else if( strcmp(argv[1],"mediaA")==0 ) {
        exec_mediaA(argc, argv);
    }
    else if( strcmp(argv[1],"mediaG")==0 ) {
        exec_mediaG(argc, argv);
    }

    return 0;
}

void exec_suma(int argc, char *argv[]) {
    int numeros[2];

    numeros[0] = atoi(argv[2]);
    numeros[1] = atoi(argv[3]);

    printf("Resultado: %d\n", math_sumar(2, numeros));
}

void exec_sumaN(int argc, char *argv[])
{
    int resultado = 0;
    int i;
    int *numeros = NULL;

    numeros = (int*)malloc((argc-2)*sizeof(int));
    if( numeros ) {
        for(i=2;i<argc;i++) {
            numeros[i] = atoi(argv[i]);
        }
        printf("Resultado: %d\n", math_sumar(argc-2, numeros));
    }
    else {
        printf("Error\n");
    }
}

void exec_resta(int argc, char *argv[])
{
    int numeros[2];

    numeros[0] = atoi(argv[2]);
    numeros[1] = atoi(argv[3]);

    printf("Resultado: %d\n", math_restar(2, numeros));
}

void exec_divide(int argc, char *argv[])
{
    int n1;
    int n2;

    n1 = atoi(argv[2]);
    n2 = atoi(argv[3]);

    if( n2!=0 ) {
        printf("Resultado: %d\n", n1/n2);
    }
    else {
        printf("Error\n");
    }
}

void exec_multiplica(int argc, char *argv[])
{
    int numeros[2];

    numeros[0] = atoi(argv[2]);
    numeros[1] = atoi(argv[3]);

    printf("Resultado: %d\n", math_multiplicar(2, numeros));
}

void exec_mediaA(int argc, char *argv[])
{
    float resultado = 0;
    int *numeros;
    int suma = 0;
    int i;

    numeros = (int*)malloc((argc-2)*sizeof(int));
    if( numeros ) {
        for(i=2;i<argc;i++) {
            numeros[i] = atoi(argv[i]);
        }
        suma = math_sumar((argc-2), numeros);
        printf("Resultado: %f\n", (float)suma / (argc-2));
    }
    else {
        printf("Error\n");
    }

    for(i=2;i<argc;i++) {
        resultado += atoi(argv[i]);
    }
    resultado = resultado / (argc-2);

    printf("Resultado: %d\n", resultado);
}

void exec_mediaG(int argc, char *argv[])
{
    float resultado = 0;
    int *numeros;
    int mult = 0;
    int i;

    numeros = (int*)malloc((argc-2)*sizeof(int));
    if( numeros ) {
        for(i=2;i<argc;i++) {
            numeros[i] = atoi(argv[i]);
        }
        mult = math_multiplicar((argc-2), numeros);
        printf("Resultado: %f\n", pow(mult, 1.0/(argc-2)));
    }
    else {
        printf("Error\n");
    }
}

int math_sumar(int n, int numeros[]) {
    int resultado = 0;
    int i;
    for(i=0;i<n;i++) {
        resultado += numeros[i];
    }
    return resultado;
}

int math_restar(int n, int numeros[]) {
    int resultado = 0;
    int i;
    for(i=0;i<n;i++) {
        resultado -= numeros[i];
    }
    return resultado;
}

int math_multiplicar(int n, int numeros[]) {
    int resultado = 1;
    int i;
    for(i=0;i<n;i++) {
        resultado *= numeros[i];
    }
    return resultado;
}
