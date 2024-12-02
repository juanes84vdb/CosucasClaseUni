#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Tipos de datos enteros
    char var1;                  // Rango [-128,127] o tabla ASCII simple. Ocupa 1 byte en memoria
    unsigned char var2;         // Rango [0,255] o tabla ASCII extendida. Ocupa 1 byte en memoria
    short var3;                 // Rango [−32767, +32767]. Ocupa 2 bytes en memoria
    unsigned short var4;        // Rango [0, 65535]. Ocupa 2 bytes en memoria
    int var5;                   // Rango [−2147483647, +2147483647]. Ocupa 4 bytes en memoria (32 bits)
    unsigned int var6;          // Rango [0, 4294967295]. Ocupa 4 bytes en memoria (32 bits)
    long var7;                  // Rango [−2147483647, +2147483647]. Ocupa 4 bytes en memoria (32 bits)
    unsigned long var8;         // Rango [0, 4294967295]. Ocupa 4 bytes en memoria (32 bits)
    long long var9;             // Rango [−9223372036854775807, +9223372036854775807]. Ocupa 8 bytes en memoria (64 bits). De la especificación C99
    unsigned long long var10;   // Rango [0, 18446744073709551615]. Ocupa 8 bytes en memoria (64 bits). De la especificación C99

    // Tipos de datos reales
    float var11;                // Rango [-3.40282·10^38,-1.17549·10^-38] y [1.17549·10^-38,3.40282·10^38]. Ocupa 4 bytes en memoria (32 bits)
    double var12;               // Rango [-1.79769·10^308,-2.22507·10^-308] y [2.22507·10^-308,1.79769·10^308]. Ocupa 8 bytes en memoria (64 bits)

    // Variable declarada con inicialización
    int n1 = 10;
    // Multiples variables declaradas
    int n2, n3=20, n4;

    // Declaración de constante
    const int MAX = 100;

    // Uso de valor constante float
    var11 = 100.5f;
    // Uso de valor constante double
    var12 = 200.5;
    var11 = 100.5;  // Conversión implícita a float

    var1 = 97;
    var1 = 'a';     // La letra 'a' de la tabla ascii tiene el codigo 97

    // Conversiones de tipos (cast)
    var5 = (int)var1;       // Sin problema, var1 cabe en un int
    var1 = (char)var5;      // Pudiera haber problemas si el valor de var5 es mayor que 127
    var11 = (float)var5;

    sizeof(int);            // Operador que nos daría el numero 4
    sizeof(var5);           // Operador que nos daría el numero 4

    // Forma para imprimir por pantalla los valores
    printf("%c", var1);     // Como letra
    printf("%d", var1);     // Como numero
    printf("%hd", var3);
    printf("%hu", var4);
    printf("%d", var5);
    printf("%u", var6);
    printf("%ld", var7);
    printf("%lu", var8);
    printf("%lld", var9);
    printf("%llu", var10);

    printf("%f", var11);
    printf("%e", var11);
    printf("%g", var11);

    printf("%lf", var12);
    printf("%le", var12);
    printf("%lg", var12);

    return 0;
}
