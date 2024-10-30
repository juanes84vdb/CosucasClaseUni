/* Problema 13 */

#include <stdio.h>

#define N 10  

int main()
{
   int i, j;
   int m[N][N]; 
   
   /* Inicializamos la matriz */
   for(i=0;i<N;i++)
      for(j=0;j<N;j++)
         if( i==j )
            m[i][j] = 1;
         else
            if( i+j==N-1 )
               m[i][j] = -1;
            else
               m[i][j] = 0;
      
   
   /* Imprimimos la matriz */
   for(i=0;i<N;i++)
   {
      for(j=0;j<N;j++)
         printf( "%d ", m[i][j] );
      printf( "\n" );
   }
}
