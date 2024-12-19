#ifndef PRACTICA_H_INCLUDED
#define PRACTICA_H_INCLUDED

char* string_create(int size, char ch, int *error);
char* string_encrypt(char *origen, int *valores, int *error);
char* string_decrypt(char *origen, int *valores, int *error);
void string_partial_uppercase(char *origen, char *word, int *error);
char* string_reverse(char *origen, int *error);
char** string_matrix(char* origen, int n, int* error);

#endif