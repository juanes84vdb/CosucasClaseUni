#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char* string_create(int size, char ch, int *error) {
    if (size <= 0) {
        *error = 1; 
        return NULL;
    }

    char *str = (char*)malloc((size + 1) * sizeof(char)); 
    if (!str) {
        if (error) {
            *error = 2; 
        }
        return NULL;
    }

    for (int i = 0; i < size; i++) {
        str[i] = (ch != 0) ? ch : '\0';
    }

    str[size] = '\0';

    if (error) {
        *error = 0;
    }

    return str;
}

char* string_encrypt(char *origen, int *valores, int *error)
{
    if (!origen || !valores)
    {
        *error = 1;
        return NULL;
    }

    int origen_len = strlen(origen);

    int valores_len =0;
    while (valores[valores_len] != '\0')
    {
        valores_len++;
    }

    if (origen_len == 0)
    {
        *error = 2;
        return NULL;
    }

    char *resultado = (char*)malloc((origen_len + 1) * sizeof(char));
    if (!resultado)
    {
        *error = 3;
        return NULL;
    }

    int valores_index = 0;

    for (int i = 0; i < origen_len; i++)
    {
        if (valores_index>= valores_len-1)
        {
            valores_index=0;
        }
        resultado[i] = origen[i] + valores[valores_index];
        valores_index = valores_index+1;
    }

    resultado[origen_len] = '\0';

    return resultado;
}

char* string_decrypt(char *origen, int *valores, int *error)
{
    if (!origen || !valores)
    {
        *error = 1;
        return NULL;
    }

    int origen_len = strlen(origen);

    int valores_len =0;
    while (valores[valores_len] != '\0')
    {
        valores_len++;
    }

    if (origen_len == 0)
    {
        *error = 2;
        return NULL;
    }

    char *resultado = (char*)malloc((origen_len + 1) * sizeof(char));
    if (!resultado)
    {
        *error = 3;
        return NULL;
    }

    int valores_index = 0;

    for (int i = 0; i < origen_len; i++)
    {
        if (valores_index>= valores_len-1)
        {
            valores_index=0;
        }
        resultado[i] = origen[i] - valores[valores_index];
        valores_index = valores_index+1;
    }

    resultado[origen_len] = '\0';

    return resultado;
}

void string_partial_uppercase(char *origen, char *word, int *error)
{

    if (!origen || !word || !error)
    {
        *error = 1;
        return;
    }

    if (strlen(word) == 0)
    {
        *error = 2;
        return;
    }

    int origen_len = strlen(origen);
    int word_len = strlen(word);

    for (int i = 0; i <= origen_len - word_len; i++)
    {
        if (strncmp(&origen[i], word, word_len) == 0 &&
                (i == 0 || !isalnum(origen[i - 1])) &&
                (i + word_len == origen_len || !isalnum(origen[i + word_len])))
        {
            for (int j = 0; j < word_len; j++)
            {
                origen[i + j] = origen[i + j] +'A'-'a';
            }
        }
    }
}


void string_partial_lowercase(char *origen, char *word, int *error)
{

    if (!origen || !word || !error)
    {
        *error = 1;
        return;
    }

    if (strlen(word) == 0)
    {
        *error = 2;
        return;
    }

    int origen_len = strlen(origen);
    int word_len = strlen(word);

    for (int i = 0; i <= origen_len - word_len; i++)
    {
        if (strncmp(&origen[i], word, word_len) == 0 &&
                (i == 0 || !isalnum(origen[i - 1])) &&
                (i + word_len == origen_len || !isalnum(origen[i + word_len])))
        {
            for (int j = 0; j < word_len; j++)
            {
                origen[i + j] = origen[i + j] +'a'-'A';
            }
        }
    }
}

char* string_reverse(char *origen, int *error) {

    if (!origen || !error) {
        *error = 1;
        return NULL;
    }

    int length = strlen(origen);

    if (length == 0) {
        *error = 2;
        return NULL;
    }

    char *reversed = (char*)malloc((length + 1) * sizeof(char));
    if (!reversed) {
        *error = 3;
        return NULL;
    }

    for (int i = 0; i < length; i++) {
        reversed[i] = origen[length - 1 - i];
    }

    reversed[length] = '\0';

    return reversed;
}

char** string_matrix(char* origen, int n, int* error) {

    if (!origen || n <= 0 || !error) {
            *error = 1; 
        return NULL;
    }

    int length = strlen(origen);
    if (length == 0) {
        *error = 2; 
        return NULL;
    }

    char** matriz = (char**)malloc(n * sizeof(char*));
    if (!matriz) {
        *error = 3; 
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        matriz[i] = (char*)malloc((length + 1) * sizeof(char));
        if (!matriz[i]) {
            *error = 4; 
            for (int j = 0; j < i; j++) {
                free(matriz[j]);
            }
            free(matriz);
            return NULL;
        }
        strcpy(matriz[i], origen); 
    }

    return matriz;
}