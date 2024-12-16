#include <stdio.h>
#include <stdlib.h>

int main()
{
    char texto[500];
    int caracteres = 0, palabras = 0, lineas = 0;
    int enPalabra = 0;

    printf("escribe un texto:\n");

    while (fgets(texto, sizeof(texto), stdin))
{
    if (texto[0] == '\n')
        {
            break;
        }
        lineas++;

        for (int i = 0; texto[i] != '\0'; i++)
        {
            caracteres++;

            if (isspace(texto[i]))
            {
                if (enPalabra)
                {
                    palabras++;
                    enPalabra = 0;
                }
            }
            else
            {
                enPalabra = 1;
            }
        }
    }
    if (enPalabra)
{
    palabras++;
}

printf("Resultado: %d lineas, %d palabras, %d caracteres\n", lineas, palabras, caracteres);

return 0;
}
