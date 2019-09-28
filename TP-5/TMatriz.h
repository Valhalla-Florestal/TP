#include <stdlib.h>
#include <stdio.h>

typedef struct{
  char dataCompra[10];
  int qtdeComprada;
}Titem;

typedef struct Celula* Apontador;

typedef struct Celula {
  struct Celula* direita, *abaixo;
  int linha, coluna;
  double valor;
}TCelula;

typedef struct{
  Apontador pPrimeiro;
  Apontador pUltimoLinha;
  Apontador pUltimoColuna;
}TMatriz;

void CriaMatrizEsparsa(TMatriz *pMatriz,int numLinha, int numColuna);
void insere(TCelula novo, TMatriz *pMatriz,int linha, int coluna);
void ImprimeMatrizEsparsa(TMatriz *pMatriz, int linha, int coluna);