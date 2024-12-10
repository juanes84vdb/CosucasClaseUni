#ifndef MATRIZ_H_INCLUDED
#define MATRIZ_H_INCLUDED

void matriz_mult(int N, int M, int **matriz, int numero);
int **matriz_create(int N, int M);
int **matriz_suma(int N, int M, int **matriz1, int **matriz2);

#endif // MATRIZ_H_INCLUDED
