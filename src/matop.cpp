#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "../include/math.hpp"
#include "../include/msgassert.hpp"
#include <string.h>
#include <getopt.h>


int main(int argc, char ** argv)
// Descricao: programa principal para execucao de operacoes de matrizes 
// Entrada: argc e argv
// Saida: depende da operacao escolhida
{
  // ate 3 matrizes sao utilizadas, dependendo da operacao
  mat_tipo a, b, c;
  FILE * outfile;

  // avaliar linha de comando
  parse_args(argc,argv);

  // execucao dependente da operacao escolhida
  switch (opescolhida){
    case OPSOMAR:
         // cria matrizes a e b aleatorias, que sao somadas para a matriz c
	 // matriz c é impressa e todas as matrizes sao destruidas
         criaMatriz(&a,optx,opty,0);
         inicializaMatrizAleatoria(&a);
         criaMatriz(&b,optx,opty,1);
         inicializaMatrizAleatoria(&b);
         criaMatriz(&c,optx,opty,2);
         inicializaMatrizNula(&c);
         somaMatrizes(&a,&b,&c);
	 imprimeMatriz(&c);
         destroiMatriz(&a);
         destroiMatriz(&b);
         destroiMatriz(&c);
	 break;
    case OPMULTIPLICAR:
         // cria matrizes a e b aleatorias, que sao multiplicadas para matriz c
	 // matriz c é impressa e todas as matrizes sao destruidas
         criaMatriz(&a,optx,opty,0);
         inicializaMatrizAleatoria(&a);
         criaMatriz(&b,opty,optx,1);
         inicializaMatrizAleatoria(&b);
         criaMatriz(&c,optx,optx,2);
         inicializaMatrizNula(&c);
         multiplicaMatrizes(&a,&b,&c);
	 imprimeMatriz(&c);
         destroiMatriz(&a);
         destroiMatriz(&b);
         destroiMatriz(&c);
	 break;
    case OPTRANSPOR:
         // cria matriz a aleatoria, que e transposta, impressa e destruida
         criaMatriz(&a,optx,opty,0);
         inicializaMatrizAleatoria(&a);
	 transpoeMatriz(&a);
	 imprimeMatriz(&a);
         destroiMatriz(&a);
	 break;
    case OPCRIAR:
         // cria matriz a aleatoria, que e salva
	 outfile = fopen(outnome,"wt");
         erroAssert(outfile != NULL,"Erro na criacao do arquivo de saida");
         criaMatriz(&a,optx,opty,0);
         inicializaMatrizAleatoria(&a);
	 salvaMatriz(&a,outfile);
         destroiMatriz(&a);
	 fclose(outfile);
	 break;
   default:
         // nao deve ser executado, pois ha um erroAssert em parse_args
         uso();
	 exit(1);
  }

  // conclui registro de acesso
  return 0;
}