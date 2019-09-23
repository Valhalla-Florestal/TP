#ifndef MATRIZ_ESPARSA_H_INCLUDED
#define MATRIZ_ESPARSA_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
    Apontador pPrimeiro;
    Apontador pUltimo;
} TLista;

void FLVazia(TLista* pLista);
int LEhVazia(TLista* pLista);
int LInsere(TLista* pLista, TItem *pItem);
int LRetira(TLista* pLista, TItem *pItem);
void LImprime(TLista* pLista);
#endif // MATRIZ_ESPARSA_H_INCLUDED
