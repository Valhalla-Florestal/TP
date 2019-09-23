#ifndef TMATRIZ_H_INCLUDED
#define TMATRIZ_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "TItem.h"

/*Vari�veis*/
//int numLinhas,numColunas;

typedef struct TCelula *Apontador;

typedef struct TCelula
{
  TItem Item;
  Apontador pProxLinha;   /*Apontadores */
  Apontador pProxColuna;  /*Apontadores */
  int linha, coluna;
}TCelula;

typedef struct Matriz
{
  Apontador pPrimeiroLinha;  /*Apontadores */
  Apontador pPrimeiroColuna; /*Apontadores */
  Apontador pAuxLinha;       /*Apontadores */
  Apontador pAuxColuna;      /*Apontadores */
}TMatriz;

/*Fun��es Lista*/
void fMatrizVazia(TMatriz* pMatriz);
int LEhVazia(TMatriz* pMatriz);
int LInsere(TMatriz* pMatriz, TItem *pItem);
void ImprimeMatriz(TMatriz* pMatriz);
void leMatriz(TMatriz* pMatriz);

#endif // TMATRIZ_H_INCLUDED
