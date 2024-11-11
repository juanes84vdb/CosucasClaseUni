#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int fibonacci(int);

int main(int argc, char *argv[])
{
    int fib = 1;
    int n;

    scanf("%d", &n);
    fib = fibonacci(n);
    printf("fib(%d) = %d\n", n, fib);
    return 0;
}

int fibonacci(int n)
{
    if (n == 1)
        return 1;
    else if (n == 0)
        return 0;
    else
        return fibonacci (n - 1) + fibonacci(n-2) ;
}
