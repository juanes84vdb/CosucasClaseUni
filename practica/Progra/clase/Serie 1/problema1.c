/* Problema 1 */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, x1, x2;
    
    /* Introducimos los coeficientes a, b y c */
    printf( "Introduzca los coeficientes de la ecuacion a·x**2+b·x+c=0\n" );
    printf( "a: " );
    scanf( "%f", &a );
    printf( "b: " );
    scanf( "%f", &b );
    printf( "c: " );
    scanf( "%f", &c );
    
    d = sqrt( b*b-4*a*c );
    x1 = (-b+d)/(2*a); 
    x2 = (-b-d)/(2*a); 
    
    printf( "Las soluciones a la ecuacion son:\n\tx1 = %f\n\tx2 = %f\n", x1, x2 );
}    
