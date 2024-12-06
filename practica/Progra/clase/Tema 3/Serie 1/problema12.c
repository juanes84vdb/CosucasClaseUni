/* Problema 12 */

#include <stdio.h>

#define N 5

int main()
{
   int i;
   int v1[N], v2[N];
   int v3[2*N]; 
   
   /* Introducimos el array 1 */
   printf( "Introduzca los elementos del array 1:\n" );
   for(i=0;i<N;i++)
   {
      printf( "Elemento %d: ", i );
      scanf( "%d", &v1[i] );
   }
   
   /* Introducimos el array 2 */
   printf( "Introduzca los elementos del array 2:\n" );
   for(i=0;i<N;i++)
   {
      printf( "Elemento %d: ", i );
      scanf( "%d", &v2[i] );
   }
   
   i = 0;
   do
   {
      v3[2*i] = v1[i];
      v3[2*i+1] = v2[N-1-i];
      i++;
   } while( i<N );
   
   /* Imprimimos el array */
   for(i=0;i<2*N;i++)
      printf( "%d ", v3[i] );
   printf( "\n" );
}
