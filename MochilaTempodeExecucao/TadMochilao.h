#ifndef TADMOCHILAO_H_INCLUDED
#define TADMOCHILAO_H_INCLUDED
#define capacidadeMochila 40
#define QtdeDeTuplas 999999
#include <stdio.h>
#include <stdlib.h>
//Estruturas

typedef struct {
    int Peso;
    int Valor;
}Tcelula;

typedef struct {
    int PesoAgregado;
    int ValorAgregado;
    Tcelula Combinacao[QtdeDeTuplas];
    int numItens;
}Tupla;

//Funções

void printCombination(Tcelula arr[], int n, int r, int z);
void combinationUtil(Tcelula arr[], Tcelula data[], int start, int end,int index, int r);


#endif // TADMOCHILAO_H_INCLUDED
