#include "TMatriz.h"

/*inicializa as celulas cabecas*/
void fMatrizVazia(TMatriz* pMatriz, int numColunaMatriz, int numLinhaMatriz)
{
    pMatriz -> pPrimeiroLinha = (Apontador) malloc(sizeof(TCelula));
    pMatriz -> pPrimeiroLinha -> pProxLinha = pMatriz -> pPrimeiroLinha;
    pMatriz -> pPrimeiroLinha -> pProxColuna = pMatriz -> pPrimeiroColuna ;
    pMatriz -> pPrimeiroLinha -> linha = -1;
    pMatriz -> pPrimeiroLinha -> coluna = -1;
    pMatriz -> pUltimo = pMatriz -> pPrimeiro;
    pMatriz -> pAuxLinha = pMatriz -> pPrimeiroLinha;
    pMatriz -> pAuxColuna = pMatriz -> pPrimeiraColuna;

    for(int i = 0; i < numLinhaMatriz; i++){
        pMatriz -> pPrimeiroLinha -> pProxLinha = (Apontador)malloc(sizeof(TCelula));
        pMatriz -> pPrimeiroLinha -> pProxColuna = pMatriz -> pPrimeiroLinha ->pProxLinha;

    }
}


void fLVaziaCabecalhoColuna(TMatriz* pMatriz, int numColunaMatriz)
{
  int valor=1;
   do
   {
     pMatriz -> pPrimeiro -> pProxLinha = (Apontador) malloc(sizeof(TCelula));
     pMatriz -> pPrimeiro -> pProxColuna = pMatriz -> pPrimeiro -> pProxLinha ;
     pMatriz -> pPrimeiro -> pProxLinha = pMatriz -> pPrimeiro;
     pMatriz -> pPrimeiro -> coluna = -1;
     numColunas++;
     printf ("ok\n %d",valor);
     valor++;
   }while (numColunas<numColunaMatriz+1);
}

void fLVaziaLinhaCabecalhoLinha(TMatriz* pMatriz,int numLinhaMatriz)
{
  do
    {
       pMatriz -> pPrimeiro -> pProxColuna = (Apontador) malloc(sizeof(TCelula));
       pMatriz -> pPrimeiro -> pProxLinha = pMatriz -> pPrimeiro -> pProxColuna ;
       pMatriz -> pPrimeiro -> pProxColuna = pMatriz -> pPrimeiro;
       pMatriz -> pPrimeiro -> linha = -1;
       numLinhas++;
       printf ("ok\n 7");
     }while (numLinhas<numLinhaMatriz+1);
}
