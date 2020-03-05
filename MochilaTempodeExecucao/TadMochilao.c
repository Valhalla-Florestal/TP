#include "TadMochilao.h"

Tupla Somatorio, Output, SomaAux;

void printCombination(Tcelula arr[], int n, int r, int z)
{
    Tcelula data[r];
    int i;
    combinationUtil(arr, data, 0, n-1, 0, r);

    if (z == 0) {
      printf("\n\t------------------------------------\n");
      printf("\t*Soma do peso da melhor combinacao: %d       \n",Output.PesoAgregado);
      printf("\t*Soma dos valores da melhor combinacao: %d      \n\t\t",Output.ValorAgregado);
      for (i = 0; i < Output.numItens; i++) {
        printf("(%d %d) ", Output.Combinacao[i].Peso,Output.Combinacao[i].Valor);
      }
      printf("\n");
    }
}




void combinationUtil(Tcelula arr[], Tcelula data[], int start, int end, int index, int r)
{
    int contador;

    // INICIALIZA ESTRUTURAS
    Somatorio.PesoAgregado = 0;
    Somatorio.ValorAgregado = 0;
    Somatorio.numItens = 0;
    SomaAux.PesoAgregado = 0;
    SomaAux.ValorAgregado = 0;

    // Printando a Combinacao
    if (index == r){
        for (int i = 0 ; i < r ; i++){
            //printf("%d - %d | ",data[i].Peso, data[i].Valor);
            Somatorio.PesoAgregado += data[i].Peso;
            Somatorio.ValorAgregado += data[i].Valor;

            //comparação da melhor combinação:
            if ( Somatorio.ValorAgregado > SomaAux.ValorAgregado && Somatorio.PesoAgregado<=capacidadeMochila){
                SomaAux.PesoAgregado = Somatorio.PesoAgregado;
                SomaAux.ValorAgregado = Somatorio.ValorAgregado;
                  //comparação da melhor soma de combinações:
                if ( SomaAux.ValorAgregado > Output.ValorAgregado && SomaAux.PesoAgregado <= capacidadeMochila){
                    Output.ValorAgregado = SomaAux.ValorAgregado;
                    Output.PesoAgregado = SomaAux.PesoAgregado;
                    Output.numItens = r;

                    //LAÇO PARA GUARDAR AS TUPLAS NO VETOR
                    for (contador = 0; contador < r; contador++){
                        Output.Combinacao[contador].Peso = data[contador].Peso;
                        Output.Combinacao[contador].Valor = data[contador].Valor;
                    }
                }
            }
        }
    return;
    }

    // Gerando as combinações possíveis

    for (int i=start; i<=end && end-i+1 >= r-index; i++){
        data[index]= arr[i];
        combinationUtil(arr, data, i+1, end, index+1, r);
    }
}
