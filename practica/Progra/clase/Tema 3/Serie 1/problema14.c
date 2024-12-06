/* Problema 14 */

#include <stdio.h>

#define N 3
#define M 2
#define R 2  

int main()
{
   int i, j, k;
   int m1[N][R]; 
   int m2[R][M];
   int solucion[N][M];
   
   /* Leemos las matrices */
   printf( "Introduzca m1:\n" );
   for(i=0;i<N;i++)
      for(j=0;j<R;j++)   
         scanf( "%d", &m1[i][j] );
          
   printf( "Introduzca m2:\n" );
   for(i=0;i<R;i++)
      for(j=0;j<M;j++)   
         scanf( "%d", &m2[i][j] );
   
   /* Efectuamos la multiplicacion */
   for(i=0;i<N;i++)
      for(j=0;j<M;j++)
      {
         solucion[i][j] = 0;
         for(k=0;k<R;k++)
            solucion[i][j] += m1[i][k]*m2[k][j];
      }
      
   
   /* Imprimimos la matriz */
   for(i=0;i<N;i++)
   {
      for(j=0;j<M;j++)
         printf( "%d ", solucion[i][j] );
      printf( "\n" );
   }
}
