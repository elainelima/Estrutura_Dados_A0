#ifndef MATH
#define MATH

#define MAXTAM 5


#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <getopt.h>
#include "../include/msgassert.hpp"

typedef struct mat{
	double m[MAXTAM][MAXTAM];
	int tamx, tamy;
	int id;
} mat_tipo;



void criaMatriz(mat_tipo * mat, int tx, int ty, int id);

void inicializaMatrizNula(mat_tipo * mat);

void inicializaMatrizAleatoria(mat_tipo * mat);

double acessaMatriz(mat_tipo * mat);

void imprimeMatriz(mat_tipo * mat);

void salvaMatriz(mat_tipo * mat, FILE * out);

void salvaMatriz(mat_tipo * mat, FILE * out);

void escreveElemento(mat_tipo * mat, int x, int y, double v);

double leElemento (mat_tipo * mat, int x, int y);

void copiaMatriz(mat_tipo *src, mat_tipo * dst, int dst_id);

void multiplicaMatrizes(mat_tipo *a, mat_tipo *b, mat_tipo *c);

void transpoeMatriz(mat_tipo *a);

void destroiMatriz(mat_tipo *a);

void parse_args(int argc,char ** argv);

void somaMatrizes(mat_tipo *a, mat_tipo *b, mat_tipo *c);

void uso();

#endif
