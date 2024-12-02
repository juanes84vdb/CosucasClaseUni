/* Problema 10 */

#include <stdio.h>

#define N 10

int main()
{
   int v[N];
   int i, tmp;   
   
   /* Introducimos el array */
   printf( "Introduzca los elementos del array:\n" );
   for(i=0;i<N;i++)
   {
      printf( "Elemento %d: ", i );
      scanf( "%d", &v[i] );
   }
   
   /* Invertimos el array */
   for(i=0;i<N;i++)    
   {
      if( i%3==0 )
         v[i] += 3;
      else
         if( i%2==0 )
            v[i] += 1;
   }
   
   /* Imprimimos el array */
   for(i=0;i<N;i++)
      printf( "%d ", v[i] );
   printf( "\n" );
}
