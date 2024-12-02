/* Problema 8 */

#include <stdio.h>

int main()
{
   char letra[4] = { 'a', 'H', 'l', 'o' };
   int  i,j,k,l;
   
   
   /* Generamos todas las palabras posibles, contemplando la repeticion */
   printf( "Con repeticion:\n" );
   for(i=0;i<4;i++)
     for(j=0;j<4;j++)
       for(k=0;k<4;k++)
         for(l=0;l<4;l++)
            printf( "%c%c%c%c ", letra[i], letra[j], letra[k], letra[l] );
   printf( "\n" );
   
   /* Generamos todas las palabras posibles, sin repeticion de letras*/
   printf( "Sin repeticion:\n" );
   for(i=0;i<4;i++)
     for(j=0;j<4;j++)
       if( i!=j )
         for(k=0;k<4;k++)
           if( k!=i && k!=j )
             for(l=0;l<4;l++)
               if( l!=i && l!=j && l!=k )
                 printf( "%c%c%c%c ", letra[i], letra[j], letra[k], letra[l] );
   printf( "\n" );
}
