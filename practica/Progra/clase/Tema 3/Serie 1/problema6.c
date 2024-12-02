/* Problema 6 */

#include <stdio.h>

int main()
{
   int anio;
   
   printf( "Introduzca un año: " );
   scanf( "%d", &anio );
   
   if( ((anio%4==0) && (anio%100!=0)) || (anio%400==0) )
      printf( "El año introducido es bisiesto\n" );
   else
      printf( "El año introducido no es bisiesto\n" );
}
