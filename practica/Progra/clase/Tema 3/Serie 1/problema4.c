/* Problema 4 */

#include <stdio.h>

int main()
{
    int n, i, j;
    int es_primo;
    
    /* Introducimos el numero n, para hallar los primos entre 1 y n */
    printf( "Introduzca el numero n: " );
    scanf( "%d", &n );
    
    for( i=1;i<n;i++ )
    {
        es_primo = 1;    /* suponemos que es primo */
        j = 2;
        while( es_primo && (j<i) )
        {
            if( i%j==0 )   /* Si es divisible por otro numero no es primo */
               es_primo = 0;
            j++;
        }    
        if( es_primo )
           printf( "%d ", i );
    }    
}    
