/* Problema 6 */

#include <stdio.h>

int main()
{
   int anio;
   
   printf( "Introduzca un a�o: " );
   scanf( "%d", &anio );
   
   if( ((anio%4==0) && (anio%100!=0)) || (anio%400==0) )
      printf( "El a�o introducido es bisiesto\n" );
   else
      printf( "El a�o introducido no es bisiesto\n" );
}
