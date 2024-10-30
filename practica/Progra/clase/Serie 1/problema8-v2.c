
#include <stdio.h>

int main()
{
    char letra[4];
    char pila1[4], pila2[4];
    char tmp;
    int i,j,k,l;
    
    letra[0] = 'H';
    letra[1] = 'o';
    letra[2] = 'l';
    letra[3] = 'a';
    
    pila1[0] = 'H';
    pila1[1] = 'o';
    pila1[2] = 'l';
    pila1[3] = 'a';
    
    pila2[0] = pila2[1] = pila2[2] = pila2[3] = 0;
    
    k = 0;
    while( k<=23 )
    {
       if( pila1[3] != 0 )
       {
           printf( "%c%c%c%c\n", pila1[0], pila1[1], pila1[2], pila1[3] );
           
       }
    }   
                         
    getch();
}
