#ifndef MATH
#define MATH

void criaMatriz(mat_tipo * mat, int tx, int ty, int id);

void inicializaMatrizNula(mat_tipo * mat)

void inicializaMatrizAleatoria(mat_tipo * mat)

double acessaMatriz(mat_tipo * mat)

void imprimeMatriz(mat_tipo * mat)

void salvaMatriz(mat_tipo * mat, FILE * out)

void salvaMatriz(mat_tipo * mat, FILE * out)

void escreveElemento(mat_tipo * mat, int x, int y, double v)

double leElemento (mat_tipo * mat, int x, int y)

void copiaMatriz(mat_tipo *src, mat_tipo * dst, int dst_id)

void multiplicaMatrizes(mat_tipo *a, mat_tipo *b, mat_tipo *c)

void transpoeMatriz(mat_tipo *a)

void destroiMatriz(mat_tipo *a)

void parse_args(int argc,char ** argv)
#endif
