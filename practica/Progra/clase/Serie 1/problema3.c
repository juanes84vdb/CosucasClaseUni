/* Problema 3 */

#include <stdio.h>

#define N 100   /* Constante simbolica */

int main()
{
    int i;
    
    /* Bucle mientras */
    i = 1;
    while( i<=N )
    {
        printf( "%d ", i );
        i++;
    }    
    printf( "\n\n" );

    /* Bucle repetir */
    i = 1;
    do
    {
        printf( "%d ", i );
        i++;
    } while( i<=N )  ;
    printf( "\n\n" );
    
    /* Bucle N-veces */
    for(i=1;i<=N;i++)
        printf( "%d ", i );
    printf( "\n\n" );    
}     

    
