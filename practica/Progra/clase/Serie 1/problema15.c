/* Problema 15 */

#include <stdio.h>

#define N 8  

int main()
{
   int i, j;
   int m[N][N]; 
   
   /* Inicializamos la matriz */
   for(i=0;i<N;i++)
      for(j=0;j<N;j++)
         m[i][j] = (i+j)%2;
      
   
   /* Imprimimos la matriz */
   for(i=0;i<N;i++)
   {
      for(j=0;j<N;j++)
         printf( "%d ", m[i][j] );
      printf( "\n" );
   }
}
