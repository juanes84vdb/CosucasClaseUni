/* Problema 2 */

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
    
    if( a==0 ) /* Ecuacion de segundo grado */
    {
        if( b!=0 )
        {
            x1 = -c / b;
            printf( "La ecuacion tiene solucion x1 = %f\n", x1 );
        }    
        else /* No hay solucion */
        {
            printf( "La ecuacion no tiene solucion\n" );
        }    
    }     
    else
    {
        /* Calculamos el radicando d = b**2 - 4*a*c */
        d = b*b-4*a*c;
        if( d==0 || d>0 )
        {
            x1 = ( -b + sqrt(d) ) / (2*a);
            x2 = ( -b - sqrt(d) ) / (2*a);
            printf( "Las soluciones a la ecuacion son:\nx1=%f\nx2=%f\n", x1, x2 );
        }
        else    
        {
            printf( "La ecuacion no tiene soluciones reales\n" );
        }            
    }    
}    
