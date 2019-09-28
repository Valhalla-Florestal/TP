#include "tad.h"

void CriaMatrizEsparsa(TMatriz *pMatriz, int linha, int coluna){
    Apontador auxiliar;

    int i;

    pMatriz->pPrimeiro = (Apontador)malloc(sizeof(TCelula));
    pMatriz->pPrimeiro->linha = -1;
    pMatriz->pPrimeiro->coluna = -1;
    pMatriz->pPrimeiro->valor = 0;

    pMatriz->pUltimoColuna = pMatriz->pPrimeiro;
    pMatriz->pUltimoLinha = pMatriz->pPrimeiro;

    auxiliar = pMatriz->pPrimeiro;

    for(i = 0; i < linha; i++){
        auxiliar->abaixo = (Apontador)malloc(sizeof(TCelula));
        auxiliar->abaixo->direita = auxiliar->abaixo;
        auxiliar->abaixo->coluna = i+1;
        auxiliar->abaixo->linha = -1;
        auxiliar->abaixo->valor = 0;
        auxiliar = auxiliar->abaixo;
    }
    pMatriz->pUltimoLinha = auxiliar;
    auxiliar = pMatriz->pPrimeiro;

    for(i = 0; i < coluna;i++){
        auxiliar->direita = (Apontador)malloc(sizeof(TCelula));
        auxiliar->direita->abaixo = auxiliar->direita;
        auxiliar->direita->linha = i+1;
        auxiliar->direita->coluna = -1;
        auxiliar->direita->valor = 0;
        auxiliar= auxiliar->direita;
    }
    pMatriz->pUltimoColuna = auxiliar;
}
//ctral d Duplica a linha

void insere(TCelula novo, TMatriz *pMatriz,int linha, int coluna){
    Apontador LinhaAHinserir,linhaAux;
    int i;

    linhaAux = pMatriz->pPrimeiro->abaixo;

    for(i = 0; i < linha; i ++){
        if(novo.linha == linhaAux->coluna){
            LinhaAHinserir = linhaAux;
        }else{
            linhaAux = linhaAux->abaixo;
        }
    }
    linhaAux = LinhaAHinserir;
    for(i = 0; i < linha; i++){
        if(linhaAux->direita == LinhaAHinserir){
            linhaAux->direita = (Apontador)malloc(sizeof(TCelula));
            linhaAux->direita->linha = novo.linha;
            linhaAux->direita->coluna = novo.coluna;
            linhaAux->direita->valor = novo.valor;
            linhaAux->direita->direita = LinhaAHinserir;
            linhaAux->direita->abaixo = linhaAux->direita;
        }else{
            linhaAux->direita;
        }
    }
}



void ImprimeMatrizEsparsa(TMatriz *pMatriz, int linha, int coluna){
    Apontador auxiliar,auxiliarLinha,auxiliarColuna,auxiliarLinhaPrincipal;
    int i,j;

    auxiliarLinha = pMatriz->pPrimeiro->abaixo;
    auxiliarLinhaPrincipal = auxiliarLinha;


    for(i = 0; i < linha; i++){
        printf("Linha %d\n",i+1);
        for(j = 0; j < coluna; j++ ){
            if(auxiliarLinha->direita != auxiliarLinhaPrincipal){
                printf("%.0lf ",auxiliarLinha->direita->valor);
                auxiliarLinha = auxiliarLinha->direita;
            }else{
                printf("0 ");
            }
        }
        printf("\n");
        auxiliarLinha = auxiliarLinhaPrincipal->abaixo;
        auxiliarLinhaPrincipal = auxiliarLinhaPrincipal->abaixo;
    }
}
