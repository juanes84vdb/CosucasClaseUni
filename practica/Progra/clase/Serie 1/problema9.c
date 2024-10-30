/* Problema 9 */

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
   for(i=0;i<N/2;i++)
   {
      tmp = v[i];
      v[i] = v[N-1-i];
      v[N-1-i] = tmp;
   }
   
   /* Imprimimos el array */
   for(i=0;i<N;i++)
      printf( "%d ", v[i] );
   printf( "\n" );
}
