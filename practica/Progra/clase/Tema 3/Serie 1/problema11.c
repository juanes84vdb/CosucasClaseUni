/* Problema 11 */

#include <stdio.h>

#define N 5

int main()
{
   int i;
   float v1[N], v2[N];
   float p_escalar;   
   
   /* Introducimos el array 1 */
   printf( "Introduzca los elementos del array 1:\n" );
   for(i=0;i<N;i++)
   {
      printf( "Elemento %d: ", i );
      scanf( "%f", &v1[i] );
   }
   
   /* Introducimos el array 2 */
   printf( "Introduzca los elementos del array 2:\n" );
   for(i=0;i<N;i++)
   {
      printf( "Elemento %d: ", i );
      scanf( "%f", &v2[i] );
   }
      
   p_escalar = 0.0;
   i = 0;
   while( i<N )
   {
      p_escalar += v1[i]*v2[i];
      i++;
   }
   
   /* Imprimimos el resultado */
   printf( "El producto escalar v1·v2 = %f\n", p_escalar );
}
