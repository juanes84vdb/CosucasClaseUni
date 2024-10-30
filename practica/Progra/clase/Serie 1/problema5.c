/* Problema 5 */

#include <stdio.h>

int main()
{
   int a, b, tmp, i , suma;
   
   printf( "Introduzca a y b: " );
   scanf( "%d %d", &a, &b );
   
   if( a<0 || b<0 )
      printf( "Error: No se admiten valores negativos\n" );
   else
   {
      /* Intercambiamos los numeros si a>b */
      if( a>b )
      {
         tmp = a;
         a = b;
         b = tmp;         
      }
      /* Calculamos la suma de los numeros entre a y b */
      suma = 0;
      for(i=a;i<=b;i++) {
		 if( i%5==0 ) {
            suma += i;
		 }
      }
      printf( "La suma de los numeros entre %d y %d es %d\n", a, b, suma );
   }      
}
