#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num1 = 7, num2 = 3;
    float num3 = 5, num4 = 2;

    // Operadores aritméticos
    printf("%d + %d = %d\n", num1, num2, num1+num2);
    printf("%d - %d = %d\n", num1, num2, num1-num2);
    printf("%d * %d = %d\n", num1, num2, num1*num2);
    printf("%d / %d = %d\n", num1, num2, num1/num2);        // División entera (ambos números son enteros). Es el cociente
    printf("%d %% %d = %d\n", num1, num2, num1%num2); // Módulo. Es el resto de la división entera

    printf("%f / %d = %f\n", num3, num2, num3/num2);                // Si uno de los dos es float, el resultado es float
    printf("%d / %d = %f\n", num1, num2, (float)num1/num2);

    printf("\n");

    // Operadores de relación (comparan). Resultado es 0 (falso) o distinto de 0 (verdadero)
    printf("%d < %d ? %d\n", num1, num2, num1<num2);
    printf("%d <= %d ? %d\n", num1, num2, num1<=num2);
    printf("%d > %d ? %d\n", num1, num2, num1>num2);
    printf("%d >= %d ? %d\n", num1, num2, num1>=num2);
    printf("%d == %d ? %d\n", num1, num2, num1==num2);
    printf("%d != %d ? %d\n", num1, num2, num1!=num2);

    printf("\n");

    // Operadores logicos (algebra booleana)
    printf("%d && %d ? %d\n", 1, 1, 1 && 1);
    printf("%d && %d ? %d\n", 1, 0, 1 && 0);
    printf("%d && %d ? %d\n", 0, 1, 0 && 1);
    printf("%d && %d ? %d\n", 0, 0, 0 && 0);

    printf("\n");

    printf("%d || %d ? %d\n", 1, 1, 1 || 1);
    printf("%d || %d ? %d\n", 1, 0, 1 || 0);
    printf("%d || %d ? %d\n", 0, 1, 0 || 1);
    printf("%d || %d ? %d\n", 0, 0, 0 || 0);

    printf("\n");

    printf("!%d ? %d\n", 1, !1);
    printf("!%d ? %d\n", 5, !5);
    printf("!%d ? %d\n", 0, !0);

    printf("\n");

    printf("%d && %d ? %d\n", 1, 2, 1 && 2);   // Este funciona a nivel de valor
    printf("%d & %d ? %d\n", 1, 2, 1 & 2);      // Bit a bit.  01 & 10 = 00
    printf("%d & %d ? %d\n", 1, 3, 1 & 3);      // Bit a bit.  01 & 11 = 01
    printf("%d | %d ? %d\n", 1, 2, 1 | 2);       // Bit a bit.  01 | 10 = 11

    printf("\n");

    // Operadores de desplazamiento
    printf("%d << 2 ? %d\n", 1, 1 << 2);        // Bit a bit.  01 << 2 = 0100 = 4. Equivale a mult. por 2^2
    printf("%d >> 2 ? %d\n", 8, 8 >> 2);        // Bit a bit.  1000 >> 2 = 0010 = 2. Equivale a div. por 2^2

    printf("\n");

    // Operadores de autoasignación
    num1 = 1;
    printf("2*1++ = %d\n", 2*num1++);       // Sufijo. Primero se usa el valor y luego se incrementa
    printf("num1 = %d\n", num1);

    num1 = 1;
    printf("2*++1= %d\n", 2*++num1);        // Prefijo. Primero se incrementa el valor y luego se usa
    printf("num1 = %d\n", num1);

    num1 = 5;
    printf("5-- = %d\n", num1--);
    num1 = 5;
    printf("--5 = %d\n", --num1);

    num1 = 5;
    printf("5+=4 = %d\n", (num1+=4));

    printf("\n");

    // Operadores varios
    printf("Tam(bytes) de num1 = %d\n", sizeof(num1));
    printf("Direccion de memoria de num1 = %X\n", &num1);
    num1 = 5 < 4 ? -1 : 1;      // Si 5 < 4, num1 = -1 . Si no num1 = 1
    printf("5 < 4 ? -1 : 1 = %d\n", num1);

    return 0;
}
