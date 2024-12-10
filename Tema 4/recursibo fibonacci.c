#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Definicion:  fib(n)! = fib(n-1) + fib(n-2)
//  con fib(1) = 1 y fib(0) = 0

int fibonacci(int n)
{
    if( n==1 ) {
        return 1;
    }
    else if( n==0 ) {
        return 0;
    }
    else if( n>1 ){
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(int argc, char *argv[])
{
    int n;
    int fib = 0;

    printf("Introduce n: ");
    scanf("%d", &n);

    fib = fibonacci(n);
    printf("fib(%d) = %d\n", n, fib);

    return 0;
}

