#include <stdlib.h>
#include <stdio.h>


//ESTRUTURAS

typedef struct {
    int quantidadeComprada;
    char dataDaCompra[10];
    int produto;
    int cliente;
}TTipoDados;

//FUN�OES

int quantidadeCompra(TTipoDados *pDadosDeCompra, int qtdeComprada);

//void imprimeMatriz(TLista* pLista);
//void leMatriz();
//void preencheMatriz();
//void quantidadeComprasPorCliente();