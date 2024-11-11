#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Definicion:  n! = n·(n-1)·(n-2)·...·3·2·1

int llamada = 1;

long long factorial_nr(int n)
{
    int i;
    long long fac = 1;

    for(i=n;i>=1;i--) {
        fac = fac * i;
    }

    return fac;
}

long long factorial_r(int n)
{
    long long resultado;

    printf("- Begin Llamada: %d [&n = %X]\n", llamada, &n);
    llamada++;
    if( n==1 ) {
        return 1;
    }
    resultado = n * factorial_r(n-1);
    llamada--;
    printf("- End Llamada: %d [n-1 se destruye]\n", llamada);
    return resultado;
}

int main(int argc, char *argv[])
{
    int n;
    long long factorial = 0;

    printf("Introduce n: ");
    scanf("%d", &n);

    factorial = factorial_nr(n);
    printf("%d! = %ld\n", n, factorial);

    factorial = factorial_r(n);
    printf("%d! = %ld\n", n, factorial);

    return 0;
}

