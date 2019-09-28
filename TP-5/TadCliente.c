#include "TadCliente.h"
#include "TMatriz.h"

//imprimeMatriz();
//leMatriz();
//quantidadeComprasPorCliente();
//void preencheMatriz();

int quantidadeCompra(TTipoDados *pDadosDeCompra, int qtdeComprada){
    int somaProdutos = 0;
    somaProdutos = somaProdutos + qtdeComprada;
    printf("%d\n",somaProdutos);
    return somaProdutos;
}