#include "Matriz_Esparsa.h"


void FLVazia(TLista *pLista)
{
    pLista->pPrimeiro = NULL;
    pLista->pUltimo = NULL;
}

int LEhVazia(TLista* pLista)
{
    return (pLista->pUltimo == NULL);
}

void LInsere(TLista* pLista,TItem* pItem)
{
    if (pLista->pUltimo == NULL)
    {
        pLista->pUltimo = (Apontador) malloc(sizeof(TCelula));
        pLista->pPrimeiro = pLista->pUltimo; }
    else
    {
        pLista->pUltimo->pProx = (Apontador) malloc(sizeof(TCelula));
        pLista->pUltimo = pLista->pUltimo->pProx;
    }
    pLista->pUltimo->Item = *pItem;
    pLista->pUltimo->pProx = NULL;
}


int LRetira(TLista* pLista, TItem* pItem)
{
    TCelula* pAux;
    if (LEhVazia(pLista))
        return 0;
    *pItem = pLista->pPrimeiro->Item;
    pAux = pLista->pPrimeiro;
    pLista->pPrimeiro = pLista->pPrimeiro->pProx;
    free(pAux);
    if (pLista->pPrimeiro == NULL)
        pLista->pUltimo = NULL; /* lista vazia */
    return 1;
}

void LImprime(TLista* pLista)
{
    Apontador pAux;
    pAux = pLista->pPrimeiro;
    while (pAux != NULL)
    {
        printf("%d\n", pAux->Item.Chave);
        pAux = pAux->pProx; /* próxima célula */
    }
}
